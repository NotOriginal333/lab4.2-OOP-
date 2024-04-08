#include "Circle.h"

double Circle::area() const {
	return M_PI * r * r;
}

double Circle::perimeter() const {
	return 2 * M_PI * r;
}