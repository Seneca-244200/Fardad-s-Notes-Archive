
/* Citation and Sources...
-----------------------------------------------------------
Overloading Lab
Module: main
Filename: main.cpp
-----------------------------------------------------------
Author: Fardad Soleimanloo
Student number: N/A
Email: fardad.soleimanloo@senecacollege.ca
Subject: OOP244
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date      Reason
V1.0              Initial Release
-----------------------------------------------------------
*/
#include <iostream>
#include "Time.h"

using namespace std;
using namespace seneca;

int main() {
   Time study;
   Time lecture;

   cout << "Setting study time using hours and minutes..." << endl;
   set(study, 1, 30);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Setting lecture time using total minutes..." << endl;
   set(lecture, 80);
   display(lecture, "Lecture");
   cout << endl;

   cout << endl;

   cout << "Adding 45 minutes to study time..." << endl;
   add(study, 45);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Adding lecture time to study time..." << endl;
   add(study, lecture);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Lecture time should still be unchanged..." << endl;
   display(lecture, "Lecture");
   cout << endl;

   return 0;
}