//#include <iostream>
//#include <vector>
//
//void func(std::vector<int> v, int n)
//{
//	v.push_back(6 * v[n - 1] - op * v[n - 2]);
//	n++;
//	if (n == 5) {
//		std::cout << v[n - 1];
//		return;
//	}
//	func(v, n);
//}
//
//int main()
//{
//	std::vector<int> v = { 3, 21 };
//	int n = 2;
//	func(v, n);
//}



//#include <iostream>
//#define N 4
//
//void reverse(int* A, int m)
//{
//	int i = 0, j = m;
//	while (i < j) {
//		std::swap(A[i], A[j]);
//		++i;
//		--j;
//	}
//}
//
//void antireflex(int* A, int m)
//{
//	int i;
//
//	if (m == 0) {
//		for (i = 0; i < N; ++i) {
//			std::cout << A[i];
//		}
//		std::cout << std::endl;
//	}
//	else {
//		for (i = 0; i <= m; ++i) {
//			antireflex(A, m - 1);
//			if (i < m) {
//				std::swap(A[i], A[m]);
//				reverse(A, m - 1);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int A[] = { 1, 2, 3, 4 };
//	std::cout << "Antireflex:\n";
//	antireflex(A, N - 1);
//}


//#include <iostream>
//
//bool NextSet(int* a, int n)
//{
//    int j = n - 2;
//    while (j != -1 && a[j] >= a[j + 1]) {
//        j--;
//    }
//    if (j == -1) { //перестановки закончились
//        return false;
//    }
//    int k = n - 1;
//    while (a[j] >= a[k]) {
//        k--;
//    }
//    std::swap(a[j], a[k]);
//    int l = j + 1, r = n - 1;
//    while (l < r) { //сортировка оставшейся части последовательности
//        std::swap(a[l++], a[r--]);
//    }
//    return true;
//}
//
//void Print(int* a, int k)  //вывод
//{
//    for (int i = 0; i < k; i++) {
//        std::cout << a[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main()
//{
//    int n, k;
//    std::cout << "n = ";
//    std::cin >> n;
//    std::cout << "k = ";
//    std::cin >> k;
//    int* a = new int[n];
//    for (int i = 0; i < n; i++) {
//        a[i] = i + 1;
//    }
//    std::cout << "A bunch of ";
//    Print(a, n);
//    while (NextSet(a, n)) {
//        Print(a, k);
//    }
//    return 0;
//}


#include <iostream>
#include <vector>
#include <string>
#define op 9 //Число mod

void invers(int** table, int size, int e) //Определяет обратные элементы
{
	std::cout << "Revers el: " << std::endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (table[i][j] == e) {
				std::cout << i << " - " << j << std::endl;
				break;
			}
		}
	}
}

void Show(int** table, int size) //Выводит таблицу Кэли
{
	std::cout << "\nCayley table:" << std::endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << table[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int** Cayley(const int* A, const int size) //Строит таблицу Кэли
{
	int e;
	bool f = false;
	int** table = new int* [size];
	for (int i = 0; i < size; i++) {
		table[i] = new int[size];
	}
	for (int i = 0; i < size; i++) {
		if (!f) {
			e = i;
		}
		for (int j = 0; j < size; j++) {
			table[i][j] = A[i] + A[j];
			table[i][j] = table[i][j] % op;
			if (e + table[i][j] == table[i][j] + e && table[i][j] + e == table[i][j]) {
				f = true;
			}
			else {
				f = false;
			}
		}
	}
	Show(table, size);
	std::cout << "Neutral element - " << e << std::endl;
	invers(table, size, e);
	return table;
}

void subgroup(int size, int** table) //Определяет подгруппы и строит таблицу Кэли для подгруппы
{
	std::cout << "\nSubgroup of group: " << std::endl;
	for (int i = 1, j = 0, num = 1, n = 1; j < size - 1; j++, num = 1, n = 1) {
		std::cout << "<" << table[i][j] << "> = { ";
		while ((table[i][j] * n) % op != 0) {
			std::cout << (table[i][j] * n) % op << ", ";
			n++;
			num++;
		}
		std::cout << "0 } ==== " << num << std::endl;
	}

	int A[] = { 3, 6, 0 };
	int size_A = sizeof(A) / sizeof(int);
	std::cout << "\nCayley table for A = { 3, 6, 0 }:";
	int** table1 = Cayley(A, size_A);
}

void factor() //Определяет смежные классы, фактор группу
{
	int A[] = { 3, 6, 0 }; //Выбранное подмножество
	std::vector<std::string> G_H = { "H" }; //Фактор множество
	bool flag = true;
	int n = 1; //считает количество смежных классов

	std::cout << "\nRelated classes:\n";
	std::cout << " H = { 3, 6, 0 }" << std::endl;
	while (flag) {
		for (int i = 0; i < 3; i++) {
			if ((A[i] + n) % op == 0) {
				flag = false;
			}
		}
		if (flag) {
			std::cout << n << "H = { ";
			for (int i = 0; i < 3; i++) {
				std::cout << A[i] + n << ", ";
			}
			std::cout << "\b\b }" << std::endl;
			G_H.push_back(std::to_string(n) + "H");
			n++;
		}
	}

	std::vector<int> G; //Файктор множество в переводе на числа
	std::cout << "\nSet G/H = { ";
	for (int i = 0; i < n; i++) {
		std::cout << G_H[i] << ", ";
		G.push_back(i);
	}
	std::cout << "\b\b }\n";

	std::cout << "\nCayley table for G/H:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((G[i] + G[j]) % n == 0) {
				std::cout << "H ";
			}
			else if (G[i] + G[j] > n) {
				std::cout << G_H[G[i] + G[j] - n] << " ";
			}
			else {
				std::cout << G_H[G[i] + G[j]] << " ";
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	const int A[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	const int size_A = sizeof(A) / sizeof(int);
	int** table1 = Cayley(A, size_A);
	subgroup(size_A, table1);
	factor();
	return 0;
}