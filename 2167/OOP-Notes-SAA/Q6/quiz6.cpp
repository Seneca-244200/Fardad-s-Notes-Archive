#include <cstring>
#include <iostream>
using namespace std;
class Person {
   char name_[41];
public:
   Person(const char name[]) {
      strcpy(name_, name);
   }

   ostream& display(ostream& os)const {
      return os << name_;
   }
};
ostream& operator<<(ostream& os, const Person& P) {
   return P.display(os);
}





/*
1 - Inherit a class out of Person, called Employee that in addition to 
    a name_ has an integer attribute called employeeNo_;

    see //1

2 - The constructor of Employee accepts a name and an employee number,
    passing the name to the Person constructor and initializing the
    attribute employeeNo_ with the value coming from the constructor
    argument.

    see // 2

3 - Employee shadows the display function of Person; printing the
    name and the employee number, space separated.*

    see // 3

4 - What change we can make to Person::display so an Employee can be
    printed using cout too without and additional code written ?

    add virtual to display of Person   
 */


// 1
class Employee :public Person {
   int empNo_;
public:
   // 2
   Employee(const char name[], int empNo) :Person(name), empNo_(empNo) {};
   // 3
   ostream& display(ostream& os)const {
      return Person::display(os) << " " << empNo_;
   }

};
    
    

