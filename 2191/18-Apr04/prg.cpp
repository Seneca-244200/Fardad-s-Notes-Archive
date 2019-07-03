#include <iostream>
#include <iomanip>
using namespace std;
class Employee {
  double salary;
  int empno;
  char name[31];
public:
  Employee(double sal, int emp, const char *nm) {
    salary = sal;
    empno = emp;
    strncpy(name, nm, 30);
    name[30] = '\0';
  }
  void SayHello() {
    cout << "Hi, I am " << name << ", how do you do? " << endl;
  }
  ostream& print(ostream& os)const {
    return os << name << "," << empno << "," << fixed << setprecision(2) << salary;
  }
};
ostream& operator<<(ostream& os, const Employee& E) {
  return E.print(os);
}
