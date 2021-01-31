#ifndef PYRAMID_H
#define PYRAMID_H
#include "Geometric_figures.h"

//�����������, ��� � ���������� �������
class Pyramid : public geometric_figures
{
private:
	double H; //������ ��������
	double h; //�������
	double A; //������� ���������
public:
	Pyramid();
	Pyramid(double A, double H, double h);
	Pyramid(const Pyramid& smth);

	void Print();
	void Read();
	double Volume();
	double Square();

	bool operator == (const Pyramid& other);
	bool operator != (const Pyramid& other);
	Pyramid& operator = (const Pyramid& other);

	~Pyramid();
};

#endif // !PYRAMID_H

