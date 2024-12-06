#include "Square.h"
#include <iostream> 
// constructor
/**
* @param int ss is the sideSize
* @param c is the drawChar
* @param x is the positionX (default 0)
* @param y is the positionY (default 0)
*/
Square::Square(int ss, char c, int x, int y) :
  Shape("Square", 4, c), sideSize(ss)
{
  // intentionally blank
}

/** implements virtual void draw() from Shape */
void Square::draw() {
  for (int row = 0; row < sideSize; ++row) {
    for (int col = 0; col < sideSize; ++col) {
      if (row == 0 || row == (sideSize - 1)) {
        std::cout << drawChar;
      }
      else { // one of the middle rows
        if (col == 0 || col == (sideSize - 1)) {
          std::cout << drawChar;
        }
        else {
          std::cout << ' ';
        }
      }
    } // end of one row
    std::cout << std::endl;
  }// end of all rows
}