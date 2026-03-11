#include "Person.cpp"

int main() {
  Person *ptr[100];
  string  n;
  int     count = 0;

  do {
    cout << "Enter Your name : ";
    getline(cin, n);

    ptr[count] = new Person;
    ptr[count]->setName(n);

    count++;

  } while (count < 3);

  for (int i = 0; i <= count; i++) { ptr[i]->printName(); }
  for (int i = 0; i <= count; i++) { delete ptr[i]; }

  return 0;
}