#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   int CstrReadBufSize = 8;
   int Utils::strLen(const char* str) {
      int i;
      for (i = 0; str[i]; i++);
      return i;
   }
   void Utils::strCpy(char* des, const char* src) {
      int i;
      for (i = 0; src[i];des[i] = src[i], i++);
      des[i] = 0;// null termination;
   }
   int Utils::readIntger() {
      int num{};
      bool ok{};
      char newline{};
      do {
         ok = true;
         cin >> num; //20 a;lsdkfgj;asldjf<ENTER>
         newline = cin.get();
         if (cin.fail() || newline != '\n') {
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invlid integer, try again: ";
         }
      } while (!ok);
      return num;
   }
   double Utils::readDouble() {
      double num{};
      bool ok{};
      char newline{};
      do {
         ok = true;
         cin >> num; //20 a;lsdkfgj;asldjf<ENTER>
         newline = cin.get();
         if (cin.fail() || newline != '\n') {
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invlid integer, try again: ";
         }
      } while (!ok);
      return num;
   }
   bool Utils::read(int& num) {
      bool cancelled = (cin.peek() == '\n');
      if (!cancelled) {
         num = readIntger();
      }
      return !cancelled;
   }
   int Utils::read( int min, int max, const char* errMes) {
      int num{};
      bool ok{};
      do {
         ok = true;
         num = readIntger();
         if (num < min || num > max) {
            ok = false;
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << "range: " << min << "=<value<=" << max << ", try again: ";
            }
         }
      } while (!ok);
      return num;
   }
   bool Utils::read(double& num) {
      bool cancelled = (cin.peek() == '\n');
      if (!cancelled) {
         num = readDouble();
      }
      return !cancelled;
   }
   double Utils::read( double min, double max, const char* errMes) {
      double num{};
      bool ok{};
      do {
         ok = true;
         num = readDouble();
         if (num < min || num > max) {
            ok = false;
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << "range: " << min << "=<value<=" << max << ", try again: ";
            }
         }
      } while (!ok);
      return num;
   }

   void Utils::read(char* str, int minLen, int maxLen, const char* errMes) {
      bool ok{};
      do {
         ok = true;
         cin.getline(str, maxLen + 1, '\n');
         if (cin.fail()) {
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
         }
         else if (strLen(str) < minLen) {
            ok = false;
         }
 /*        if (!ok) {
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << minLen << "<=length" << "<=" << maxLen << ", retry:";
            }
         }*/
      } while (!ok && (errMes? cout << errMes: cout << minLen << "<=length" << "<=" << maxLen << ", retry:"));
   }

   char* Utils::read(istream& istr, char delimeter) {
      char* data = new char[CstrReadBufSize];
      char* str = data;
      int noOfBufs = 1;
      bool done{};
      do{
         done = true;
         istr.getline(str, CstrReadBufSize, delimeter);
         if (istr.fail()) {
            noOfBufs++;
            char* temp = new char[(CstrReadBufSize - 1) * noOfBufs + 1];
            strCpy(temp, data);
            delete[] data;
            data = temp;
            str = data + (CstrReadBufSize - 1) * (noOfBufs - 1);
            istr.clear();
            done = false;
         }
      }while(!done);
      str = new char[strLen(data) + 1]; // final adjustment
      strCpy(str, data);
      delete[] data;
      return str;
   }

}
