#include <iostream>
using namespace std;
class Student {
public:
  Student(unsigned long int studentNumber = 0);
};
int main() {
  int num;
  double money = 23.45;
  num = int(money);
  Student S;
  // if you write:
  S = 123456789;
  // this happens
  //S = Student(123456789);


  return 0;
}