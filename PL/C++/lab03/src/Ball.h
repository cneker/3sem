#ifndef BALL_H
#define BALL_H
#include "Geometric_figures.h"

class Ball : public geometric_figures
{
private:
	double R; //радиус
public:
	Ball();
	Ball(double R);
	Ball(const Ball& smth);

	void Print();
	void Read();
	double Volume();
	double Square();

	bool operator == (const Ball& other);
	bool operator != (const Ball& other);
	Ball& operator = (const Ball& other);

	~Ball();
};
#endif // !BALL_H
