#include <iostream>
using namespace std;
class Time {
private:
  int hours;
  int mins;
  int secs;

public:
  Time() {
    hours = 0;
    mins = 0;
    secs = 0;
  }
  Time(int h, int m, int s) {
    hours = h;
    mins = m;
    secs = s;
  }
  void display() { cout << hours << " : " << mins << " : " << secs << endl; }
  Time addTime(Time t1, Time t2) {
    int s = t1.secs + t2.secs;
    int m = t1.mins + t2.mins;
    int h = t1.hours + t2.hours;
    if (s > 59) {
      s -= 60;
      m++;
    }
    if (m > 59) {
      m -= 60;
      h++;
    }
    Time t3(h, m, s);
    return t3;
  }
};