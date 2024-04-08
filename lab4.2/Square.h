#pragma once
#include "Figure.h"


class Square : public Figure
{
private:
	double side;

public:
	Square(double s) : side(s) {}

	double getSide() { return side; };

	double area() const override;

	double perimeter() const override;

	~Square() override {};
};

