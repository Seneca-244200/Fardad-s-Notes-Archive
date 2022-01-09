#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   int CstrReadBufSize = 8;

   void Utils::strCpy(char* des, const char* src) {
      int i;
      for (i = 0; src[i]; des[i] = src[i], i++);
      des[i] = '\0'; // null termination
   }
   int Utils::strLen(const char* str) {
      int i;
      for (i = 0; str[i]; i++);
      return i;
   }


   int Utils::readInt() {
      int num{};
      bool ok{};
      char newline{};
      do {
         ok = true;   // twentyfive<ENTER>
         cin >> num; //   25<ENTER>   
         newline = cin.get();
         if (cin.fail() || newline != '\n') {
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Bad int, redo: ";
         }
      } while (!ok);
      return num;
   }
   double Utils::readDbl() {
      double num{};
      bool ok{};
      char newline{};
      do {
         ok = true;   // twentyfive<ENTER>
         cin >> num; //   25<ENTER>   
         newline = cin.get();
         if (cin.fail() || newline != '\n') {
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Bad number, redo: ";
         }
      } while (!ok);
      return num;
   }
   bool Utils::read(int& num) {
      bool aborted = (cin.peek() == '\n');
      if (!aborted) {
         num = readInt();
      }
      return !aborted;
   }
   bool Utils::read(double& num) {
      bool aborted = (cin.peek() == '\n');
      if (!aborted) {
         num = readDbl();
      }
      return !aborted;
   }


   bool Utils::read(int& num, int min, int max, const char* errMes) {
      bool ok{};
      bool aborted{};
      do {
         ok = true;
         aborted = !read(num);
         if (!aborted) {
            if (num < min || num > max) {
               ok = false;
               if (errMes) {
                  cout << errMes;
               }
               else {
                  cout << "Range: " << min << "<=value<=" << max << ", redo: ";
               }
            }
         }
      } while(!aborted && !ok);
      return !aborted;
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
         else if(strLen(str) < minLen){
            ok = false;
         }
        /* if (!ok) {
            if (errMes) {
               cout << errMes;
            }
            else {
               cout << "Range: " << minLen << "<=length" << "<=" << maxLen << ", retry: ";
            }
         }*/
      } while (!ok && (errMes? cout << errMes : cout << "Range: " << minLen << "<=length" << "<=" << maxLen << ", retry: "));
   }
   char* Utils::read(istream& istr, char delimeter) {
      char* data = new char[CstrReadBufSize];
      char* str = data;
      int noOfBufs = 1;
      bool done{};
      do {
         done = true;
         istr.getline(str, CstrReadBufSize, delimeter);
         if (istr.fail()) {
            noOfBufs++;
            char* temp = new char[(CstrReadBufSize - 1) * noOfBufs + 1 ];
            strCpy(temp, data);
            delete[] data;
            data = temp;
            str = data + (CstrReadBufSize - 1) * (noOfBufs - 1);
            istr.clear();
            done = false;
         }
      } while (!done);
      str = new char[strLen(data) + 1];
      strCpy(str, data);
      delete[] data;
      return str;
   }




}
