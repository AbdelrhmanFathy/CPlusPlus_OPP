#include <iostream>
using namespace std;

class EDistance {
private:
  int feet;
  float inches;

public:
  EDistance() {
    feet = 0;
    inches = 0;
  }
  EDistance(int f, float in) {
    feet = f;
    inches = in;
  }
  void getDistance() {
    cout << "Enter the number of feet :";
    cin >> feet;

    cout << "Enter the number of inches : ";
    cin >> inches;
  }

  void showDistance() {
    cout << "Distance " << feet << " feet and " << inches << " inches" << endl;
  }

  EDistance addDistance(EDistance d) {
    int f = feet + d.feet;
    float in = inches + d.inches;
    if (in >= 12) {
      in = in - 12;
      f++;
    }
    return EDistance(f, in);
  }
  double toMeters(EDistance d) {
    // convert inches to feet
    double totalFeet = d.feet + d.inches / 12;
    // convert total feet to meters
    double meter = totalFeet * 0.3048;

    return meter;
  }
};