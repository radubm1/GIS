#ifndef _LINE_H
#define _LINE_H
#include "framework.h"
#include "Point.h"

class Line {
  private:
    Point p1;
    Point p2;

  public:
      Line(Point _p1, Point _p2);
      void Draw(HDC memDC);
      Point getP1();
      Point getP2();

};
#endif
