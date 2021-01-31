#include "Geometric_figures.h"
#include "Colection_figures.h"
#include "Cone.h"
#include "Ball.h"
#include "Pyramid.h"

using namespace std;

void con(Colection& colection);
void ball(Colection& colection);
void pyr(Colection& colection);
void cmp();
void show(Colection& colection);
void del(Colection& colection);
void del_in(Colection& colection);


int main()
{
	setlocale(LC_ALL, "rus");
	int choise;
	Colection colection(0);
	cout <<
		"�������� ���������, � ������� ������� �������� �������: �������������� ������ (�����, ���, ��������). ������� ����� ��� �������� ��������� ����� (������� ���������� �� ������� �����), � ������� ����������� �������� �[]�. ��� �������� ������ � ��� �������� ����������� �������� �==�, �!=�, �=�. ������������������ ������ ����������. ";
	while (1)
	{
		cout << "\n�������� ��������:\n"
			<< "1. ������� �����\n"
			<< "2. ������� ���\n"
			<< "3. ������� ��������\n"
			<< "4. �������� 2 ����\n"
			<< "5. ������� ��� �������\n"
			<< "6. ������� ������ � �����\n"
			<< "7. ������� ������ �� �������\n"
			<< "0 exit\n";
		try {
			cin >> choise;
			switch (choise)
			{
			case 1:
				con(colection);
				break;
			case 2:
				ball(colection);
				break;
			case 3:
				pyr(colection);
				break;
			case 4:
				cmp();
				break;
			case 5:
				show(colection);
				break;
			case 6:
				del(colection);
				break;
			case 7:
				del_in(colection);
			default:
				return 0;
				break;
			}
		}
		catch (Index_Error& e) {
			cout << "������ �������: " << e.get_message() << endl;
		}
		catch (...)
		{
			cout << "������ ������." << endl;
		}
	}
	return 0;
}

void con(Colection& colection)
{
	Cone *c1 = new Cone;
	c1->Read();
	c1->Print();
	cout << "�������� �� �������(1) ��� � �����(0)?\n";
	bool choise = false;
	cin >> choise;
	if (choise) {
		int index;
		cout << "������� ������: ";
		cin >> index;
		colection.add_index(c1, index);
	}
	else {
		colection.add_end(c1);
	}
}

void ball(Colection& colection)
{
	Ball *b1 = new Ball(7);
	b1->Print();
	cout << "�������� �� �������(1) ��� � �����(0)?\n";
	bool choise = false;
	cin >> choise;
	if (choise) {
		int index;
		cout << "������� ������: ";
		cin >> index;
		colection.add_index(b1, index);
	}
	else {
		colection.add_end(b1);
	}
}

void pyr(Colection& colection)
{
	Pyramid* p1 = new Pyramid;
	p1->Print();
	colection.add_end(p1);
	cout << "�������� �� �������(1) ��� � �����(0)?\n";
	bool choise = false;
	cin >> choise;
	if (choise) {
		int index;
		cout << "������� ������: ";
		cin >> index;
		colection.add_index(p1, index);
	}
	else {
		colection.add_end(p1);
	}
}

void cmp()
{
	Ball* b1, * b2;
	b1 = new Ball;
	b1->Read();
	b2 = b1;
	b2->Print();
	if (b2 == b1) {
		cout << "��� �����\n";
	}
}

void show(Colection& colection)
{
	for (int i = 0; i < colection.get_count(); i++) {
		colection[i]->Print();
	}
}

void del(Colection& colection)
{
	colection.del_end();
	cout << "������ �����\n";
}

void del_in(Colection& colection)
{
	int index;
	cout << "������� ������: ";
	cin >> index;
	colection.del_index(index);
}