#include "Time.cpp"
#include <iostream>
using namespace std;

int main() {
  Time t1(10, 20, 40);
  Time t2(20, 50, 10);

  Time t3 = t3.addTime(t1, t2);

  t3.display();

  return 0;
}