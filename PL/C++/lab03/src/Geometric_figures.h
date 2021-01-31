#ifndef GEOMETRIC_FIGURES_H
#define GEOMETRIC_FIGURES_H
#include <iostream>
#define pi 3.14

using namespace std;

class geometric_figures
{
public:
	virtual void Print() = 0;
	virtual void Read() = 0;
	virtual double Volume() = 0;
	virtual double Square() = 0;
};

#endif // !GEOMETRIC_FIGURES_H