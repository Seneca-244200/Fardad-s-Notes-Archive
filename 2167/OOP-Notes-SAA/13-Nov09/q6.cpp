#include <cstring>
#include <iostream>
using namespace std;
class Person {
   char name_[41];
public:
   Person(const char name[]) {
      strcpy(name_, name);
   }
   virtual ostream& display(ostream& os)const{
      return os << name_;
   }
};

ostream& operator<<(ostream& os, const Person& P) {
   return P.display(os);
}

class Employee :public Person {
   int empNo_;
public:
   Employee(const char name[], int empNo) :Person(name), empNo_(empNo) {};
   ostream& display(ostream& os)const {
      return Person::display(os) << " " << empNo_;
   }
};