
#include "Poly.h"

Poly::Poly(std::vector<Line> _Shape)
{
	Shape = _Shape;
}

void Poly::Fill(HDC hdc, COLORREF color) {
    // Create a solid brush with the specified color
    HBRUSH hBrush = CreateSolidBrush(color);
    HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, hBrush);

    std::vector<POINT> points;

    for (auto ln : Shape) {

        POINT P1;
        P1.x = (long int)ln.getP1().getX();
        P1.y = (long int)ln.getP1().getY();
        POINT P2;
        P2.x = (long int)ln.getP2().getX();
        P2.y = (long int)ln.getP2().getY();

       points.push_back(P1);
       points.push_back(P2);

    }


    // Draw and fill the polygon
    Polygon(hdc, points.data(), points.size());

    // Restore the old brush and delete the created brush to free resources
    SelectObject(hdc, oldBrush);
    DeleteObject(hBrush);
}

