
#include "Point.h"

Point::Point(int _x, int _y) {
	Point::xVal = _x;
	Point::yVal = _y;
}

Point::Point() {
	Point::xVal = 0;
	Point::yVal = 0;
}

int Point::getX() {
	return Point::xVal;
}

int Point::getY() {
	return Point::yVal;
}