#include "EDistance.cpp"

int main() {
  EDistance d[5];
  double meters[5];

  // get Distance information
  for (int i = 0; i < 5; i++) {
    cout << "Enter the information of Distance " << i + 1 << " : " << endl;
    d[i].getDistance();
  }

  // convert from feet and inches to meters

  for (int i = 0; i < 5; i++) {
    meters[i] = d[i].toMeters(d[i]);
  }

  for (int i = 0; i < 5; i++) {
    cout << "The distance " << i + 1 << "  =  " << meters[i] << " meter"
         << endl;
  }

  return 0;
}