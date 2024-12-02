#pragma once
#include <string>
class Shape
{
private:
  std::string shapeName;
  int numSides;
  int positionX, positionY;

protected:
  char drawChar;

public:
  //constructor
  /**
  * @param std::string name is the shapeName
  * @param int n is the number of sides (numSides)
  * @param char c is the drawChar
  * @param int x is the positionX
  * @param int y is the positionY
  */
  Shape(std::string name, int n, char c, int x=0, int y=0);

  // accessors
  virtual void draw();
  std::string getName();
};

