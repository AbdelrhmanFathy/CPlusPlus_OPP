#include "Rectangle.cpp"
#include <iostream>
using namespace std;

int main() {
  Rectangle r;
  r.setWidth(5);
  r.setHeight(10);
  cout << "Area of rectangle: " << r.getArea() << endl;
  return 0;
}