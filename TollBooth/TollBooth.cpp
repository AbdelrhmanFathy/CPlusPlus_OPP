#include <iostream>
using namespace std;
class TollBooth {
private:
  unsigned int numberOfCars;
  double totalAmount;

public:
  TollBooth() {
    numberOfCars = 0;
    totalAmount = 0;
  };
  TollBooth(unsigned int n, double amount) {
    numberOfCars = n;
    totalAmount = amount;
  };

  void payingCar() {
    numberOfCars += 1;
    totalAmount += 0.5;
  }

  void noPayCar() { numberOfCars += 1; }

  void display() {
    cout << "The total number of cars : " << numberOfCars << endl;
    cout << "The total amount : " << totalAmount << endl;
  }
};