#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  string studentId;
  double grade;

public:
  void setName(string newName) { name = newName; }
  string getName() { return name; }
  void setStudentId(string newId) { studentId = newId; }
  string getStudentId() { return studentId; }
  void setGrade(double newGrade) {
    if (grade >= 0 && grade <= 100) {
      grade = newGrade;
    } else {
      cout << "Error grade should between 0 and 100" << endl;
    }
  }
  double getGrade() { return grade; }
  void displayInfo() {
    cout << "Name : " << name << ", ID : " << studentId << ", Grade : " << grade
         << endl;
  }
};