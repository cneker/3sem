#ifndef PYRAMID_H
#define PYRAMID_H
#include "Geometric_figures.h"

//Предположим, что в основаниии квадрат
class Pyramid : public geometric_figures
{
private:
	double H; //высота пирамиды
	double h; //апофема
	double A; //сторона основания
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

