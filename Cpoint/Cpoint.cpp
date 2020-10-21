#include "Cpoint.h"

Cpoint::Cpoint()
{
}

Cpoint::Cpoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

Cpoint::~Cpoint()
{
}

void Cpoint::InputXY()
{
	std::cout << "\nInput X ";
	std::cin >> this->x;

	std::cout << "\nInput Y ";
	std::cin >> this->y;
}

double Cpoint::getx()
{
	return x;
}

double Cpoint::gety()
{
	return y;
}

double Cpoint::hline()
{
	return sqrt(x * x + y * y);
}

Cpoint Cpoint::turnrad(double rad)
{
	if (((y < 0) && (x > 0)) || ((y < 0) && (x < 0)))
	{
		x = -x;
		y = -y;
	}
	return Cpoint(x * cos(rad) + y * sin(rad), -x * sin(rad) + y * cos(rad));
}

