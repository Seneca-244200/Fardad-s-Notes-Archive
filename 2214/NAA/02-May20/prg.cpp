#include <iostream>
using namespace std;
#include "Student.h"
#include "Student.h"
#include "Student.h"
#include "Student.h"
#include "Student.h"
#include "Student.h"

int main() {
   int age;
   double gpa;
   cout << "hello there!\nHow old are you? ";
   cin >> age;
   if (age < 16) {
  //    printf("Isn't %d years old too young to be in college!\n", age);
      cout << "Isn't " << age << " years old too young to be in college!" << endl;
   }
   else {
      cout << "Welcome to oop244" << endl;
      cout << "What is your gpa so far? ";
      cin >> gpa;
      if (gpa > 3.0) {
         cout << "good job!" << endl;
      }
      else {
         cout << "Gotta work a little harder.";
      }
   }
   return 0;
}