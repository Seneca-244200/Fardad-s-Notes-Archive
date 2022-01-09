#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   int CstrReadBufSize = 8;
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

   void Utils::read(char* str, int minLen, int maxLen, const char* errMes) {
      bool ok;
      do {
         ok = true;
         cin.getline(str, maxLen + 1, '\n');
         if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            ok = false;
         }
         else if (strLen(str) < minLen) {
            ok = false;
         }
      } while (!ok && cout << (errMes?errMes:""));
   }

   char* Utils::read(istream& istr, char delimeter) {
      char* data = new char[CstrReadBufSize];
      char* str = data;
      int noOfBufs = 1;
      bool done;
      do {
         done = true;
         istr.getline(str, CstrReadBufSize, delimeter);
         if (istr.fail()) {
            noOfBufs++;
            char* temp = new char[ (CstrReadBufSize-1) * noOfBufs + 1];
            strCpy(temp, data);
            delete[] data;
            data = temp;
            str = data + (CstrReadBufSize-1) * (noOfBufs - 1);
            istr.clear();
            done = false;
         }
      } while (!done);
      str = new char[strLen(data) + 1];
      strCpy(str, data);
      delete[] data;
      return str;
   }

   int Utils::strLen(const char* str) {
      int i;
      for (i = 0; str[i]; i++);
      return i;
   }

   void Utils::strCpy(char* des, const char* src) {
      int i;
      for (i = 0; src[i]; des[i] = src[i], i++);
      des[i] = 0;
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
