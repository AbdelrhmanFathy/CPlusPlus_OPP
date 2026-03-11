#include <iostream>
using namespace std;

class Person {
  private:
    string name;

  public:
    void setName(string n) { name = n; }

    void printName() { cout << "Name : " << name << endl; }
};