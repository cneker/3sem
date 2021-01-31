#include <iostream>

using namespace std;

int** a_b(int* A, int size_A, int& size_R1) //отношение R1
{
	int num_col = 2;
	int** R1 = new int* [size_A * size_A];
	for (int i = 0; i < size_A * size_A; i++) {
		R1[i] = new int[num_col];
	}
	for (int i = 0; i < size_A; i++) {
		for (int j = 0; j < size_A; j++) {
			if ((A[i] * A[j]) % 2 == 1) {
				R1[size_R1][0] = A[i];
				R1[size_R1][1] = A[j];
				size_R1++;
			}
		}
	}
	return R1;
}

int** b_a(int* A, int size_A, int& size_R2) //отношение R2
{
	int num_col = 2;
	int** R2 = new int* [size_A * size_A];
	for (int i = 0; i < size_A * size_A; i++) {
		R2[i] = new int[num_col];
	}
	for (int i = 0; i < size_A; i++) {
		for (int j = 0; j < size_A; j++) {
			if ((A[i] + 4) == A[j]) {
				R2[size_R2][0] = A[i];
				R2[size_R2][1] = A[j];
				size_R2++;
			}
		}
	}
	return R2;
}

void show(int** R, int size) //вывод отношения в консоль
{
	int count = 0;
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << "(";
		for (int j = 0; j < 2; j++) {
			cout << R[i][j] << ",";
		}
		cout << "\b) ";
		count++;
		if (count == 10) {
			count = 0;
			cout << endl;
		}
	}
	cout << "\b}" << endl;
}

int** matrix(int** R, int size_A, int size_R) //построение матрицы отношений
{
	int** matrix = new int* [size_A];
	for (int i = 0; i < size_A; i++) {
		matrix[i] = new int[size_A];
	}
	bool is = false;
	cout << endl;
	for (int i = 0; i < size_A; i++) {
		for (int j = 0; j < size_A; j++) {
			for (int c = 0; c < size_R; c++) {
				if (R[c][0] == i + 1 && R[c][1] == j + 1) {
					is = true;
					break;
				}
				else {
					is = false;
				}
			}
			if (is == true){
				matrix[i][j] = 1;
			}
			else {
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}

void show_matrix(int** matrix, int size_A) //вывод матрицы в консоль
{
	for (int i = 0; i < size_A; i++) {
		for (int j = 0; j < size_A; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int** R_(int** R, int size) //обратное отношение
{
	int** R_1 = new int* [size];

	for (int i = 0; i < size; i++) {
		R_1[i] = new int[2];
	}

	for (int i = 0; i < size; i++) {
		R_1[i][0] = R[i][0];
		R_1[i][1] = R[i][1];
	}

	for (int i = 0; i < size; i++) {
		swap(R_1[i][0], R_1[i][1]);
	}
	return R_1;
}

int** Addition1(int** R1, int size_R1, int* A, int size_A, int& size_Ra) //дополнение отношения
{
	int** R_a1 = new int* [size_A * size_A];
	bool is_of = false;

	for (int i = 0; i < size_A * size_A; i++) {
		R_a1[i] = new int[2];
	}

	for (int i = 0; i < size_A; i++) {
		for (int j = 0; j < size_A; j++) {
			is_of = false;
			for (int c = 0; c < size_R1; c++) {
				if ((A[i] != R1[c][0] && A[j] != R1[c][1]) || (A[i] == R1[c][0] && A[j] != R1[c][1]) || (A[i] != R1[c][0] && A[j] == R1[c][1])) {
					continue;
				}
				else if (A[i] == R1[c][0] && A[j] == R1[c][1]) {
					is_of = true;
					break;
				}
			}
			if (is_of == false) {
				R_a1[size_Ra][0] = A[i];
				R_a1[size_Ra][1] = A[j];
				size_Ra++;
			}
		}
	}
	return R_a1;
}

int** Fl_Yo(int** matrix_of) //алгоритм Флойда-Уоршолла
{
	for (int k = 0; k < 10; k++) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				matrix_of[i][j] = matrix_of[i][j] 
					|| matrix_of[i][k] 
					&& matrix_of[k][j];
			}
		}
	}
	return matrix_of;
}

int** del_el(int** R, int size, int index) //"удаление" элемента по индексу
{
	for (int i = index; i < size; i++) {
		R[i] = R[i + 1];
	}

	return R;
}

int** Compos_R1oR2(int** R1, int** R2, int size_R1, int size_R2, int& size_C) //Находит композицию двух отношений
{
	int** Comp = new int* [size_R1 * size_R2];
	for (int i = 0; i < size_R1 * size_R2; i++) {
		Comp[i] = new int[2]{0};
	}
	for (int i = 0; i < size_R1; i++) {
		for (int j = 0; j < size_R2; j++) {
			if (R2[j][1] == R1[i][0]) {
				Comp[size_C][0] = R1[i][0];
				Comp[size_C][1] = R2[j][1];
				size_C++;
			}
		}
	}
	//поиск и "удаление" повторяющихся элементов
	for (int i = 0; i < size_C; i++){
		for (int j = i + 1; j < size_C; j++) {
			if (*Comp[i] == *Comp[j]) {
				Comp = del_el(Comp, size_C, j);
				size_C--;
				j--;
			}
		}
	}

	return Comp;
}

void type_of_function(int* C, int* B, int S[][2], int size_C, int size_B, int size_S) //определяет тип функции
{
	bool injection = true;
	bool surjection = true;
	bool bijection = true;
	int* size_of_row = new int[size_C] {0};
	for (int i = 0; i < size_B; i++) {
		for (int j = 0; j < size_C; j++) {
			for (int k = 0; k < size_S; k++) {
				if (B[j] == S[k][0] && C[i] == S[k][1]) {
					size_of_row[i]++;
					break;
				}
			}
		}
	}

	for (int i = 0; i < size_B; i++) {
		if (size_of_row[i] > 1) {
			injection = false;
		} 
		if (size_of_row[i] == 0) {
			surjection = false;
		}
	}
	if (injection == true && surjection == true) {
		cout << "bijection\n";
	}
	else {
		if (injection == true) {
			cout << "injection\n";
		}
		else {
			cout << "ne injection\n";
		}

		if (surjection == true) {
			cout << "surjection\n";
		} 
		else {
			cout << "ne surjection\n";
		}
	}
}

void is_functin(int* B, int* C, int S[][2], int size_B, int size_S, int size_C) //является ли отношение функцией
{
	bool is_func = true;
	int* size_of_line = new int[size_B] {0};
	int** matrix = new int* [size_B];
	for (int i = 0; i < size_B; i++) {
		matrix[i] = new int[size_C];
	}
	for (int i = 0; i < size_B; i++) {
		for (int j = 0; j < size_C; j++) {
			for (int k = 0; k < size_S; k++) {
				if (B[i] == S[k][0] && C[j] == S[k][1]) {
					matrix[i][j] = 1;
					size_of_line[i]++;
					break;
				}
				else {
					matrix[i][j] = 0;
				}
			}
		}
	}

	show_matrix(matrix, 4);

	for (int i = 0; i < size_B; i++) {
		if (size_of_line[i] != 1) {
			is_func = false;
			break;
		}
	}

	if (is_func == true) {
		cout << "\nFunction\n";
		type_of_function(C, B, S, size_C, size_B, size_S);
	}
	else {
		cout << "\nne function";
	}
}

int main()
{
	//Task 1

	int A[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size_A = sizeof(A) / sizeof(int);
	int size_R1 = 0, size_R2 = 0, size_Ra1 = 0, size_Ra2 = 0, size_C = 0;
	int** R1 = a_b(A, size_A, size_R1);
	int** R2 = b_a(A, size_A, size_R2);
	int** R_1 = R_(R1, size_R1);
	int** R_2 = R_(R2, size_R2);
	int** R_a1 = Addition1(R1, size_R1, A, size_A, size_Ra1);
	int** R_a2 = Addition1(R2, size_R2, A, size_A, size_Ra2);
	cout << endl;
	show(R1, size_R1);
	cout << endl;
	show(R2, size_R2);
	show(R_1, size_R1);
	cout << endl;
	show(R_2, size_R2);
	cout << endl;
	show(R_a1, size_Ra1);
	cout << endl;
	show(R_a2, size_Ra2);
	int** matrix1 = matrix(R_1, size_A, size_R1);
	int** matrix2 = matrix(R_2, size_A, size_R2);
	int** matrix3 = matrix(R_a1, size_A, size_Ra1);
	int** matrix4 = matrix(R_a2, size_A, size_Ra2);
	cout << endl;
	show_matrix(matrix1, size_A);
	cout << endl;
	show_matrix(matrix2, size_A);
	cout << endl;
	show_matrix(matrix3, size_A);
	show_matrix(matrix3, size_A);
	cout << endl;
	show_matrix(matrix4, size_A);
	int** Floid_Yorshal = Fl_Yo(matrix2); //or matrix2
	int** R1oR2 = Compos_R1oR2(R1, R2, size_R1, size_R2, size_C);
	show(R1oR2, size_C);
	int** matrix1 = matrix(R1oR2, size_A, size_C);
	show_matrix(Floid_Yorshal, size_A);
	cout << endl;

	//Task 2

	int B[] = { 1, 2, 3, 4 };
	int C[] = { 5, 6, 7, 8 };
	int S[][2] = { { 1, 6 }, { 2, 8 }, {3, 5}, {4, 7} };
	int size_B = sizeof(B) / sizeof(int);
	int size_C = sizeof(C) / sizeof(int);
	int size_S = sizeof(S) / (sizeof(int) * 2);
	is_functin(B, C, S, size_B, size_S, size_C);

	return 0;
}