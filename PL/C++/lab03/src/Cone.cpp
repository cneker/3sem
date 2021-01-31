#include "Cone.h"

Cone::Cone() : R(1), L(1), H(1)
{}

Cone::Cone(double Rad, double Len, double Hig) : R(Rad), L(Len), H(Hig)
{}

Cone::Cone(const Cone& smth) : R(smth.R), L(smth.L), H(smth.H)
{}

void Cone::Print()
{
	cout << "\nКонус:\n"
		<< "R = " << R << endl
		<< "L = " << L << endl
		<< "H = " << H << endl
		<< "Площадь поверхности = " << Square() << endl
		<< "Объём = " << Volume() << endl;
}

void Cone::Read()
{
	cout << "Введите радиус основания конуса: ";
	cin >> R;
	cout << "Введите образующую конуса: ";
	cin >> L;
	cout << "Введите высоту конуса: ";
	cin >> H;
}

double Cone::Square()
{
	return pi * R * (R + L);
}

double Cone::Volume()
{
	return 1.0 / 3.0 * pi * pow(R, 2) * H;
}

bool Cone::operator==(const Cone& other)
{
	return *this == other;
}

bool Cone::operator!=(const Cone& other)
{
	return !(*this == other);
}

Cone& Cone::operator=(const Cone& other)
{
	return *this = other;
}

Cone::~Cone()
{}