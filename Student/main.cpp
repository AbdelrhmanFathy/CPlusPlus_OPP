#include "Student.cpp"

int main() {
  Student s1;
  s1.setName("Alice");
  s1.setStudentId("S12345");
  s1.setGrade(92.5);

  Student s2;
  s2.setName("Bob");
  s2.setStudentId("S67890");
  s2.setGrade(105.0);
  s2.setGrade(78.3);

  s1.displayInfo();
  s2.displayInfo();

  return 0;
}