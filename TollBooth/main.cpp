#include "TollBooth.cpp"
#include <iostream>
using namespace std;

const char ESC = 27;

int main() {
  TollBooth t1;
  char c;
  cout << "Press 0 for non paying car"
       << "\nPress 1 for paying car"
       << "\nPress ESC to exit the program" << endl;
  do {
    cin >> c;
    if (c == '1') {
      t1.payingCar();
    } else if (c == '0') {
      t1.noPayCar();
    }

  } while (c != ESC);

  t1.display();

  return 0;
}