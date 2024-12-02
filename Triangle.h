#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
private:
  int sideSize;

public:
  // constructor
  /**
  * @param int ss is the sideSize
  * @param c is the drawChar
  * @param x is the positionX (default 0)
  * @param y is the positionY (default 0)
  */
  Triangle(int ss, char c, int x = 0, int y = 0 );

  // accessors
  /** implements virtual void draw() from Shape */
  void draw();
};
