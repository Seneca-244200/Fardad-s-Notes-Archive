#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   void Utils::read(int& num) {
      bool ok = false;
      char newline = 'x';
      do {
         cin >> num;
         newline = cin.get();
         if (cin.fail() || newline != '\n') {   // ten<ENTER> or 10and something after<ENTER>
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            // an invalid integer value was entered!!!
            cout << "Invalid Integer, try again: ";
         }
         else {
            ok = true;
         }
      } while (!ok);
   }

   void Utils::read(int& num, int min, int max, const char* errMes) {
      bool ok = false;
      do {
         read(num);
         // it is a valid integer but I don't know if it is in range.
         if (num >= min && num <= max) {
            ok = true; // everything good to go
         }
         else {
            ok = false;  // int is not in range.
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << min << ">= value =>" << max << ", try again: ";
            }
         }
      } while (!ok);
   }
   void Utils::read(double& num) {
      bool ok = false;
      char newline = 'x';
      do {
         cin >> num;
         newline = cin.get();
         if (cin.fail() || newline != '\n') {   // ten<ENTER> or 10and something after<ENTER>
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            // an invalid doubleeger value was entered!!!
            cout << "Invalid number, try again: ";
         }
         else {
            ok = true;
         }
      } while (!ok);
   }

   void Utils::read(double& num, double min, double max, const char* errMes) {
      bool ok = false;
      do {
         read(num);
         // it is a valid doubleeger but I don't know if it is in range.
         if (num >= min && num <= max) {
            ok = true; // everything good to go
         }
         else {
            ok = false;  // double is not in range.
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << min << ">= value =>" << max << ", try again: ";
            }
         }
      } while (!ok);
   }
}
