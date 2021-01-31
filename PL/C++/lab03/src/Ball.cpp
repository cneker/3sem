#include "Ball.h"

Ball::Ball() : R(1)
{}

Ball::Ball(double Rad) : R(Rad)
{}

Ball::Ball(const Ball& smth): R(smth.R)
{}

void Ball::Print()
{
	cout << "\n���:\n"
		<< "R = " << R << endl
		<< "������� ����������� = " << Square() << endl
		<< "����� = " << Volume() << endl;
}

void Ball::Read()
{
	cout << "������� ������ ����: ";
	cin >> R;
}

double Ball::Square()
{
	return 4.0 * pi * pow(R, 2);
}

double Ball::Volume()
{
	return 4.0 / 3.0 * pi * pow(R, 3);
}

bool Ball::operator==(const Ball& other)
{
	return *this == other;
}

bool Ball::operator!=(const Ball& other)
{
	return !(*this == other);
}

Ball& Ball::operator=(const Ball& other)
{
	return *this = other;
}

Ball::~Ball()
{}