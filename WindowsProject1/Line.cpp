
#include "Line.h"

Line::Line(Point _p1, Point _p2) {
    p1 = _p1;
    p2 = _p2;
}
void Line::Draw(HDC memDC) {
    for (int y = p1.getY(); y < p2.getY(); y++)
        for (int x = p1.getX(); x < p2.getX(); x++)
            if (y == x * (p2.getY() - p1.getY()) / (p2.getX() - p1.getX()) + p1.getY() - ((p2.getY() - p1.getY()) / (p2.getX() - p1.getX())) * p1.getX())
                SetPixel(memDC, x, y, RGB(255, 255, 255));// this means WHITE!
}

