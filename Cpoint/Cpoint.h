#pragma once
#include<iostream>

class Cpoint
{
public:
	Cpoint();
	Cpoint(double x, double y);

	~Cpoint();


	void InputXY();

	double getx();
	double gety();

	double hline();

	Cpoint turnrad(double rad);


private:
	double x;
	double y;


};