#pragma once
#include "Figure.h"


class Ellipse : public Figure
{
private:
	double semi_major_axis;
	double semi_minor_axis;

public:
	Ellipse(double a, double b) : semi_major_axis(a), semi_minor_axis(b) {}

	double area() const override;

	double perimeter() const override;

	~Ellipse() override {};
};

