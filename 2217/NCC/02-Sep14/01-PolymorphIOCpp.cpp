// Encapsulation 
// Polymorphism
// Inheritance 

// abstraction NOT Object oriented



#include <iostream>
using namespace std;
int main() {
   int age;
   double money;
   char name[51];
   cout << "Hello OOP244 NCC student, type your name: ";
   cin >> name;
   cout << "Your age: ";
   cin >> age;
   cout << "How much money in your pocket: ";
   cin >> money;
   cout << "Hello " << name << endl;
   cout << "You are " << age << " years old and have " << money << " Dollars in your pocket" << endl;
   return 0;
}