#pragma once
#include <math.h>
#include <corecrt_math_defines.h>

class Figure
{
public:
	virtual double area() const = 0;

	virtual double perimeter() const = 0;

	virtual ~Figure() {}
};

