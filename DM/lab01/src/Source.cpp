#include <iostream>
#include <Windows.h>

using namespace std;

void direct_mul(const int* A, const int* B,const int size_a,const int size_b) //прямое произведение А и В
{
	cout << "Прямое произведение множеств А и В:\n{";
	for (int i = 0; i < size_a; i++) {
		for (int j = 0; j < size_b; j++) {
			cout << '(' << A[i] << ',' << B[j] << "), ";
		}
	}
	cout << "\b\b}\nЕго мощность:";
	cout << endl << size_a * size_b << endl << endl;
}

void output(int* U, int size_u, int x) //пересечение множеств
{
	int z = 1 << (size_u - 1);
	for (int i = 0; i < size_u; i++) {
		if ((x & z) == z) {
			cout << U[i] << ", ";
		}
		z = z >> 1;
	}
	cout << "\b\b}\n";
}

int maska(int* A, int* U, int size_a, int size_u) //битовая маска 
{
	int y = 1, x = 0;
	for (int i = 0, j = 0; i < size_a; i++, j++) {
		y = 1;
		if (A[i] == U[j]) {
			y = y << (size_u - j - 1);
			x = x ^ y;
		}
		else {
			i--;
		}
	}
	return x;
}

void maska_dop(int* A, int* B, int* U, int size_a, int size_b, int size_u) //пересечение множеств, используя маску
{
	int x = maska(A, U, size_a, size_u);
	int y = maska(B, U, size_b, size_u);
	x = x & y;
	cout << "\nПересечение множеств А и В, используя маску = {";
	output(U, size_u, x);
	cout << endl;
}

void merge(const int* A, const int* B, int const size_a, int const size_b) //алгоритм "слияние" для А и В
{
	int* cm = new int[size_a + size_b];
	int i = 0, j = 0, k = 0;
	while (i != size_a && j != size_b) {
		int data;
		if (A[i] < B[j]) {
			data = A[i];
			i++;
		}
		else if (A[i] > B[j]) {
			data = B[j];
			j++;
		}
		else {
			data = A[i];
			i++;
			j++;
		}
		cm[k] = data;
		k++;
	}
	if (i == size_a && j == size_b);
	else {
		if (i != size_a) {
			while (i != size_a) {
				cm[k] = A[i];
				k++;
				i++;
			}
		}
		if (j != size_b) {
			while (j != size_b) {
				cm[k] = B[j];
				k++;
				j++;
			}
		}
	}
	cout << "Объединение множеств А и В алгоритмом \"слияние\":\n" << '{';
	for (i = 0; i < k; i++) {
		cout << cm[i] << ", ";
	}
	cout << "\b\b}\n";
}

void Expression(int* A, int* B, int* C, int* U, int size_a, int size_b, int size_c, int size_u) //вычисление выражения
{
	int x = maska(A, U, size_a, size_u);
	int y = maska(B, U, size_a, size_u);
	x = x ^ y;
	int c = maska(C, U, size_c, size_u);
	c = c & x;
	cout << "\nВыражение (A" << (char)127 << "B)" << (char)94 << "C = {";
	output(U, size_u, c);
}

void grey_kod(int* A, int size_a) //код Грея
{
	int kod[5], tmp;
	cout << "\nБинарный код Грея для множества В:" << endl;
	for (int i = 0; i < size_a; i++) {
		cout << A[i] << '\t';
		tmp = A[i] ^ (A[i] >> 1);
		for (int j = 4; j >= 0; j--) {
			kod[j] = tmp % 2;
			tmp /= 2;
		}
		for (int c = 0; c < 5; c++) {
			cout << kod[c];
		}
		cout << endl;
	}
}

void bylean(int* A, int size_a) //булеан множества А
{
	double size_byl = pow(2, size_a);
	int count = 0;
	cout << "\nБулеан множества A:\n{{{";
	for (int i = 0; i < size_byl; i++)
	{
		int number = i;
		int j = 0;
		cout << '{';
		while (number != 0)
		{
			if (number % 2 == 1) {
				cout << A[j] << ", ";
			}
			number /= 2;
			j++;
		}
		count++;
		cout << "\b\b}, ";
		if (count == 7) {
			cout << endl;
			count = 0;
		}
	}
	cout << "\b\b}\n\n";
}

void print(int* bm, int size_b, int* p, int size_p) 
{
	int i, j, imax = 1;
	for (i = 2; i <= size_p; i++) {
		if (p[i] > imax) {
			imax = p[i];
		}
	}
	cout << '{';
	for (i = 1; i <= imax; i++) {
		cout << "{";
		for (j = 1; j <= size_p; j++) {
			if (p[j] == i) {
				cout << bm[j] << ",";
			}
		}
		cout << "\b} ";
	}
	cout << "\b}" << endl;
}

void fragmetation(int* p, int size_p, int* bm, int size_b, int i = 1, int j = 1) 
{
	int l;
	if (i > size_b) {
		print(bm, size_b, p, size_p);
	}
	else {
		for (l = 1; l <= j; l++) {
			p[i] = l;
			if (l == j) {
				fragmetation(p, size_p, bm, size_b, i + 1, j + 1);
			}
			else {
				fragmetation(p, size_p, bm, size_b, i + 1, j);
			}
		}
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	system("color F0");
	int U[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 },
		A[] = { 2, 3, 4, 5, 6 },
		B[] = { 3, 4, 6, 7 },
		C[] = { 3, 5, 8, 9 };
	int size_u = sizeof(U) / sizeof(*U); //мощность универса
	int size_a = sizeof(A) / sizeof(*A); //мощность множества А
	int size_b = sizeof(B) / sizeof(*B); //мощность множества B
	int size_c = sizeof(C) / sizeof(*C); //мощность множества C
	bylean(A, size_a);
	direct_mul(A, B, size_a, size_b);
	merge(A, B, size_a, size_b);
	Expression(A, B, C, U, size_a, size_b, size_c, size_u);
	maska_dop(A, B, U, size_a, size_b, size_u);
	grey_kod(C, size_c);
	int pm[100];
	int* p = new int[size_b + 1];
	cout << "\n" << "Разбиение: \n";
	for (int j = 1; j <= size_b; j++) {
		pm[j] = B[j - 1];
	}
	fragmetation(p, size_b + 1, pm, size_b);
	return 0;
}