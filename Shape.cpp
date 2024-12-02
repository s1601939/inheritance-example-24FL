#include "Shape.h"
// constructor
  /**
  * @param std::string name is the shapeName
  * @param int n is the number of sides (numSides)
  * @param char c is the drawChar
  * @param int x is the positionX
  * @param int y is the positionY
  */
Shape::Shape(std::string name, int n, char c, int x, int y) :
  shapeName(name), numSides(n), drawChar(c), positionX(x), positionY(y)
{
  // intentionally blank
}

void Shape::draw() {
  // intentionally blank
  // implemented in derived classes
}

std::string Shape::getName() {
  return shapeName;
}