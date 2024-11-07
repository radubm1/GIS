#ifndef _POINT_H
#define _POINT_H


class Point {
  private:
    int xVal;
    int yVal;

public:
    Point(int _x, int _y);
    Point();
    int getX();
    int getY();

};
#endif
