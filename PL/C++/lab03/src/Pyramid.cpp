#include "Pyramid.h"

Pyramid::Pyramid() : A(1), H(1), h(1)
{}

Pyramid::Pyramid(double Hih, double Len, double Apo) : A(Len), H(Hih),h(Apo)
{}

Pyramid::Pyramid(const Pyramid& smth) : A(smth.A), H(smth.H), h(smth.h)
{}

void Pyramid::Print()
{
	cout << "\nПирамида:\n"
		<< "A = " << A << endl
		<< "H = " << H << endl
		<< "h = " << h << endl
		<< "Площадь поверхности = " << Square() << endl
		<< "Объём = " << Volume() << endl;
}

void Pyramid::Read()
{
	cout << "Введите сторону основания пирамиды: ";
	cin >> A;
	cout << "Введите высоту пирамиды: ";
	cin >> H;
	cout << "Введите образующую пирамиды: ";
	cin >> h;
}

double Pyramid::Square()
{
	return pow(A, 2) + 1.0 / 2.0 * 4.0 * A * h;
}

double Pyramid::Volume()
{
	return 1.0 / 3.0 * pow(A, 2) * H;
}

bool Pyramid::operator==(const Pyramid& other)
{
	return *this == other;
}

bool Pyramid::operator!=(const Pyramid& other)
{
	return !(*this == other);
}

Pyramid& Pyramid::operator=(const Pyramid& other)
{
	return *this = other;
}

Pyramid::~Pyramid()
{}