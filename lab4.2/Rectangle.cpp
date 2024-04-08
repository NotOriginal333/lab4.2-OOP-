#include "Rectangle.h"

double Rectangle::area() const {
	return width * height;
}

double Rectangle::perimeter() const {
	return 2 * (width + height);
}