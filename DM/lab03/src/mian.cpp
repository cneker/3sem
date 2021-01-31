//Обход в ширину

//#include <iostream>
//#include <list>
//
//using namespace std;
//
//class Graph 
//{
//	// количество вершин
//	int V;
//	list<int>* adjList;
//	void util(int v, bool visited[]);
//
//public:
//	Graph(int v);
//	void add_edge(int v, int w);
//	void BFS();
//};
//
//Graph::Graph(int v) 
//{
//	V = v;
//	adjList = new list<int>[V];
//}
//
//void Graph::add_edge(int v, int w) 
//{
//	v--; w--;
//	adjList[v].push_back(w);
//}
//
//void Graph::util(int v, bool visited[]) 
//{
//	list<int> queue;
//	list<int>::iterator i;
//	visited[v] = true; // текущий узел помечаем как посещенный
//	queue.push_back(v);
//	while (!queue.empty()) {
//		v = queue.front();
//		cout << v + 1 << " ";
//		queue.pop_front();
//		// исследуем вершины одну за другой
//		for (i = adjList[v].begin(); i != adjList[v].end(); ++i) {
//			if (!visited[*i]) {
//				visited[*i] = true;
//				queue.push_back(*i);
//			}
//		}
//	}
//
//	cout << "\n";
//}
//
//void Graph::BFS() 
//{
//	cout << "Обход графа в ширину: " << "\n";
//	int count = 0;
//	bool* visited = new bool[V];
//	for (int i = 0; i < V; i++) {
//		visited[i] = false; // все вершины не посещенные
//	}
//	for (int i = 0; i < V; i++) {
//		if (!visited[i]) {
//			util(i, visited);
//			count++;
//		}
//	}
//	cout << "\nЧисло компонент связности: " << count;
//}
//
//int main() 
//{
//	setlocale(LC_ALL, "rus");
//	Graph dg(9);
//	dg.add_edge(1, 2);
//	dg.add_edge(1, 3);
//	dg.add_edge(2, 3);
//	dg.add_edge(3, 4);
//	dg.add_edge(4, 5);
//	dg.add_edge(4, 6);
//	dg.add_edge(3, 4);
//	dg.add_edge(7, 8);
//	dg.add_edge(7, 9);
//	dg.add_edge(8, 9);
//
//	dg.BFS();
//	return 0;
//}


//Обход в глубину

//#include <iostream>
//#include <list>
//
//using namespace std;
//
//class Graph 
//{
//	// количество вершин
//	int V;
//	list<int>* adjList;
//	void util(int v, bool visited[]);
//
//public:
//	Graph(int v);
//	void add_edge(int v, int w);
//	void DFS();
//};
//
//Graph::Graph(int v) 
//{
//	V = v;
//	adjList = new list<int>[V];
//}
//
//void Graph::add_edge(int v, int w) 
//{
//	v--; w--;
//	adjList[v].push_back(w);
//}
//
//void Graph::util(int v, bool visited[]) 
//{
//	list<int>::iterator i;
//	visited[v] = true; // текущий узел помечаем как посещенный
//	cout << v + 1 << " ";
//	// рекурсивно обрабатываем все соседние вершины узла
//	for (i = adjList[v].begin(); i != adjList[v].end(); ++i) {
//		if (!visited[*i]) {
//			util(*i, visited);
//		}
//	}
//}
//
//void Graph::DFS() 
//{
//	bool* visited = new bool[V];
//	for (int i = 0; i < V; i++) {
//		visited[i] = false; // все вершины не посещенные
//	}
//	int count = 0;
//	cout << "Обход в глубину графа:" << "\n";
//	// исследуем вершины одну за другой
//	for (int i = 0; i < V; i++) {
//		if (!visited[i]) {
//			util(i, visited);
//			count++;
//		}
//	}
//	cout << "\nЧисло компонент связности: " << count;
//	cout << "\n";
//}
//
//int main() 
//{
//	setlocale(LC_ALL, "rus");
//	Graph dg(9);
//	dg.add_edge(1, 2);
//	dg.add_edge(1, 3);
//	dg.add_edge(2, 3);
//	dg.add_edge(3, 4);
//	dg.add_edge(4, 5);
//	dg.add_edge(4, 6);
//	dg.add_edge(3, 4);
//	dg.add_edge(7, 8);
//	dg.add_edge(7, 9);
//	dg.add_edge(8, 9);
//	dg.DFS();
//	return 0;
//}



//Алгоритм Флойда-Уоршолла?

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Graph 
{
private:
	// количество вершин
	int V;
	vector<vector<int>> G; // граф
public:
	Graph(int v);
	void add_edge(int u, int v, int w);
	void floyd();
	void display();
};

Graph::Graph(int v) 
{
	V = v;
	vector<vector<int>> g(V, vector<int>(V));
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			g[i][j] = (i == j) ? 0 : 1000;
		}
	}
	G = g;
}

void Graph::add_edge(int u, int v, int w) 
{
	u--, v--;
	G[u][v] = G[v][u] = w;
}

void Graph::floyd() 
{
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
			}
		}
	}
}

void Graph::display() 
{
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			cout << setw(4) << G[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() 
{
	Graph gf(6);
	gf.add_edge(1, 2, 7);
	gf.add_edge(2, 3, 5);
	gf.add_edge(4, 3, 8);
	gf.add_edge(1, 4, 6);
	gf.add_edge(3, 5, 6);
	gf.add_edge(4, 5, 10);
	gf.add_edge(4, 6, 14);
	gf.add_edge(5, 6, 11);
	gf.floyd();
	gf.display();
	return 0;
}


//Алгоритм Дейкстры

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//void Read(int** GR, int N)
//{
//	ifstream Ft;
//	Ft.open("matrix.txt");
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			Ft >> GR[i][j];
//	Ft.close();
//}
//
//void Dijkstra(int** GR, int st, int N)
//{
//	int index, u, m = st + 1;
//	int* distance = new int[N];
//	bool* visited = new bool[N];
//	for (int i = 0; i < N; i++)
//	{
//		distance[i] = INT_MAX;
//		visited[i] = false;
//	}
//	distance[st] = 0;
//	for (int count = 0; count < N - 1; count++)
//	{
//		int min = INT_MAX;
//		for (int i = 0; i < N; i++)
//			if (!visited[i] && distance[i] <= min)
//			{
//				min = distance[i];
//				index = i;
//			}
//		u = index;
//		visited[u] = true;
//		for (int i = 0; i < N; i++)
//			if (!visited[i] && GR[u][i] && distance[u] != INT_MAX &&
//				distance[u] + GR[u][i] < distance[i])
//				distance[i] = distance[u] + GR[u][i];
//	}
//	cout << "Стоимость пути из начальной вершины до остальных:\n";
//	for (int i = 0; i < N; i++)
//		if (distance[i] != INT_MAX)
//			cout << m << " -> " << i + 1 << " = " << distance[i] << endl;
//		else
//			cout << m << " -> " << i + 1 << " - " << "маршрут недоступен" << endl;
//	delete[] distance;
//	delete[] visited;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int N, start;
//	cout << "Введите размер матрицы: "; cin >> N;
//	int** GR = new int* [N];
//	for (int i = 0; i < N; i++)
//		GR[i] = new int[N];
//	Read(GR, N);
//	cout << "Матрица смежности:\n";
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//			cout << GR[i][j] << "	";
//		cout << endl;
//	}
//	cout << "Начальная вершина >> "; cin >> start;
//	Dijkstra(GR, start - 1, N);
//	for (int i = 0; i < N; i++)
//		delete[] GR[i];
//	delete[] GR;
//	return 0;
//}


//Алгоритм Прима

//#include <fstream>
//#include<iostream>
//#include <iomanip>
//
//using namespace std;
//
//const int MAX = 101;
//
//int main() 
//{
//	setlocale(0, "");
//	system("color F0");
//	int n = 8; // размер матрицы смежностей
//	ifstream fin("matrix1.txt");
//	int** graph = new int* [n];
//	for (int i = 0; i < n; i++) { //матрица смежности
//		graph[i] = new int[n];
//	}
//
//	bool* visited = new bool[n]; // массив, хранящий вершины уже добавленные в минимальное остовное дерево
//
//	for (int i = 0; i < n; i++) { //считываем матрицу с файла
//		for (int j = 0; j < n; j++) {
//			fin >> graph[i][j];
//			if (graph[i][j] == 0)
//				graph[i][j] = MAX; // нули меняем на 'бесконечность'
//			cout << setw(4) << graph[i][j];
//		}
//		cout << endl;
//		visited[i] = false; //инициализация - вершин добавленых в дерево нет
//	}
//	fin.close();
//	int v1, v2; // v1-вершина уже добавленая, v2 - будет добавлена
//	int min;
//	visited[0] = true; // добавляем в дерево первую вершину
//	for (int tek = 1; tek < n; tek++) { // повторяем н - 1 раз(н - 1 : оставшееся количество вершин)
//		min = MAX; // мин = *бесконечность*
//		for (int i = 0; i < n; i++) { // тут ищем потенциально возможные новые рёбра для дерева, для минимального ребра сохраняем вершины при нем
//			if (visited[i] == true) {
//				for (int d = 0; d < n; d++) {
//					if (min > graph[i][d] && !visited[d]) {
//						v1 = i; //уже добавили
//						min = graph[i][d];
//						v2 = d; //будет добавлена
//					}
//				}
//			}
//		}
//		cout << endl << v1 << ' ' << v2;
//		visited[v2] = true;
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++)
//		delete[] graph[i];
//	system("pause");
//	return 0;
//}

//Алгоритм Крускаля

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include <iostream>
//
//using namespace std;
//
//int i, j, k, a, b, u, v, n, ne = 1;
//int min, mincost = 0, cost[9][9], parent[9];
//
//int find(int);
//int uni(int, int);
//
//int main() 
//{
//	setlocale(0, "");
//	system("color F0");
//	int min;
//	printf("Введите количество вершин: ");
//	scanf("%d", &n);
//	printf("\nВведите матрицу: \n");
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			scanf("%d", &cost[i][j]);
//			if (cost[i][j] == 0)
//				cost[i][j] = 999;
//		}
//	}
//	while (ne < n) { //просматривает матрицу и находит в ней наименьшее значение
//		for (i = 1, min = 999; i <= n; i++) {
//			for (j = 1; j <= n; j++) {
//				if (cost[i][j] < min) {
//					min = cost[i][j];
//					a = u = i;
//					b = v = j;
//				}
//			}
//		}
//		u = find(u);
//		v = find(v);
//		if (uni(u, v)) {
//			printf("%d edge (%d, %d) =%d\n", ne++, a, b, min);
//			mincost += min;
//		}
//		cost[a][b] = 999;
//	}
//	printf("\n\tМинимальная сумма = %d\n", mincost);
//}
//
////находит корни деревьев, которым u и v принадлежат
//
//int find(int i) 
//{
//	while (parent[i])
//		i = parent[i];
//	return i;
//}
//
////Если два корня совпадают, код ничего не делает, ребро не используется
//
//int uni(int i, int j) 
//{
//	if (i != j) {
//		parent[j] = i;
//		return 1;
//	}
//	return 0;
//}


//Алгоритм Прюфера

//#include<iostream>
//#include <vector>
//#include <set>
//#include <climits>
//
//using namespace std;
//
//class Graph 
//{
//private:
//	// количество вершин
//	int V;
//	int E;
//	vector<pair<int, int>> G; // граф исходный
//	vector<pair<int, int>> D; // граф декодированный
//	vector<int> Degree;
//	vector<int> Code;
//public:
//	Graph(int v);
//	void add_edge(int u, int v);
//	void prufer_encode();
//	void prufer_decode();
//	void display();
//};
//
//Graph::Graph(int v) 
//{
//	V = v;
//	E = V - 1;
//	vector<int> d(V, 0);
//	Degree = d;
//	Code.clear();
//	D.clear();
//}
//
//void Graph::add_edge(int u, int v) 
//{
//	G.push_back(make_pair(u, v));
//	Degree[u]++;
//	Degree[v]++;
//}
//
//void Graph::display() 
//{
//	cout << "Исходное дерево:\n";
//	for (int i = 0; i < G.size(); i++) {
//		cout << G[i].first << " " << G[i].second << "\n";
//	}
//	cout << "Код Прюфера: ";
//	for (int i = 0; i < Code.size(); i++) {
//		cout << Code[i] << " ";
//	}
//	cout << "\n";
//	cout << "Декодированное дерево:\n";
//	for (int i = 0; i < D.size(); i++) {
//		cout << D[i].first << " " << D[i].second << "\n";
//	}
//}
//
//void Graph::prufer_encode() 
//{
//	int x;
//	for (int i = 0; i < V - 2; i++) {
//		int min = INT_MAX;
//
//		// выбрать вершину с наименьшим индексом и равную 1
//		for (int j = 0; j < E; j++) {
//			if (Degree[G[j].first] == 1 && Degree[G[j].second] > 0) {
//				if (min > G[j].first) {
//					min = G[j].first;
//					x = j;
//				}
//			}
//
//			if (Degree[G[j].second] == 1 && Degree[G[j].first] > 0) {
//				if (min > G[j].second) {
//					min = G[j].second;
//					x = j;
//				}
//			}
//		}
//		// уменьшить значение вершин на 1
//		if (Degree[G[x].first] > 0) {
//			Degree[G[x].first]--;
//		}
//
//		if (Degree[G[x].second] > 0) {
//			Degree[G[x].second]--;
//		}
//
//		// сохранить вершину, из которой удаляется лист
//		if (Degree[G[x].first] == 0) {
//			Code.push_back(G[x].second);
//		}
//		else {
//			Code.push_back(G[x].first);
//		}
//	}
//}
//
//void Graph::prufer_decode() 
//{
//	int n = (int)Code.size() + 2;
//	vector<int> degree(n, 1);
//	for (int i = 0; i < n - 2; ++i) {
//		++degree[Code[i]];
//	}
//	set<int> leaves;
//	for (int i = 0; i < n; ++i) {
//		if (degree[i] == 1) {
//			leaves.insert(i);
//		}
//	}
//
//	for (int i = 0; i < n - 2; ++i) {
//		int leaf = *leaves.begin();
//		leaves.erase(leaves.begin());
//		int v = Code[i];
//		D.push_back(make_pair(leaf, v));
//		if (--degree[v] == 1) {
//			leaves.insert(v);
//		}
//	}
//	D.push_back(make_pair(*leaves.begin(), *--leaves.end()));
//}
//
//int main() 
//{
//	setlocale(LC_ALL, "rus");
//	Graph gp(13);
//	gp.add_edge(0, 1);	
//	gp.add_edge(0, 2);
//	gp.add_edge(1, 3);
//	gp.add_edge(1, 4);
//	gp.add_edge(2, 5);
//	gp.add_edge(2, 6);
//	gp.add_edge(4, 7);
//	gp.add_edge(7, 8);
//	gp.add_edge(7, 9);
//	gp.add_edge(9, 10);
//	gp.add_edge(9, 11);
//	gp.add_edge(11, 12);
//	gp.prufer_encode();
//	gp.prufer_decode();
//	gp.display();
//	return 0;
//}