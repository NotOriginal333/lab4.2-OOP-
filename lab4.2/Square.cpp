#include "Square.h"

double Square::area() const {
	return side * side;
}

double Square::perimeter() const {
	return 4 * side;
}