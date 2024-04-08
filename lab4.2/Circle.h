#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	double r;
public:
	Circle(double r) { this->r = r; };

	double area() const override;

	double perimeter() const override;

	~Circle() override {};
};

