#ifndef CONE_H
#define CONE_H
#include "Geometric_figures.h"

class Cone : public geometric_figures
{
private:
	double R; //радиус основания
	double L; //образующая конуса
	double H; //высота конуса
public:
	Cone();
	Cone(double R, double L, double H);
	Cone(const Cone& smth);

	void Print();
	void Read();
	double Volume();
	double Square();

	bool operator == (const Cone& other);
	bool operator != (const Cone& other);
	Cone& operator = (const Cone& other);

	~Cone();
};
#endif // !CONE_H

