/**
* Testing and implementation for inheritance examples
*/
#include <iostream>
#include <vector>
#include "Square.h"
#include "Triangle.h"
using namespace std;

void drawSquare(int sideSize, char drawChar);
void drawTriangle(int sideSize, char drawChar);

int main() {
  drawSquare(4, '*');
  drawTriangle(5, '+');

  cout << "Now with classes" << endl;
  Square sq1(6, '#');
  cout << "I am a " << sq1.getName() << endl;
  sq1.draw();

  Triangle tr1(5, 'T', 0, 0);
  cout << "I am a " << tr1.getName() << endl;
  tr1.draw();

  cout << "Now with a vector" << endl;
  vector<Shape*> shapeList;
  shapeList.push_back(&sq1);
  shapeList.push_back(&tr1);
  shapeList.push_back(new Triangle(7, '+'));
  for (Shape* thisShape : shapeList) {
    cout << "I am a " << thisShape->getName() << endl;
    thisShape->draw();
    if (thisShape->getName() == "Triangle") {
      cout << typeid(*thisShape).name() << endl;
    }
  }

  return 0;
}

void drawSquare(int sideSize, char drawChar) {
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
void drawTriangle (int sideSize, char drawChar) {
  for (int row = 0; row < sideSize; ++row) {
    for (int col = 0; col < sideSize; ++col) {
      if (row == 0) {
        std::cout << drawChar;
      }
      else { // one of the middle rows
        if (col == 0 || col == ( (sideSize - 1) - row)) {
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