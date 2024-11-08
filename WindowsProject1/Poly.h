#ifndef _POLY_H
#define _POLY_H


#include "Line.h"
#include <vector>

class Poly {
  private:
    std::vector<Line> Shape;


  public:
    Poly(std::vector<Line> _Shape);
    void Fill();

};
#endif
