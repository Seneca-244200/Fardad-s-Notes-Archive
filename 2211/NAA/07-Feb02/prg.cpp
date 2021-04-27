#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
// the logic has to got in a loop for this to work for anysize
   char* read() {
      char* toReturn = nullptr;
      char* str = new char[31];
      cin.getline(str, 31);
      if (cin.fail()) {
         char* temp = new char[30 + 31];
         strcpy(temp, str);
         delete[] str;
         str = temp;
         cin.clear();
         cin.getline(&str[30], 31);
      }

      toReturn = new char[strlen(str) + 1];
      strcpy(toReturn, str);

      delete[] str;
      return toReturn;
   }

int main() {
   cout << "Enter a string: ";
   char* theStr = read();
   cout << "you entered: ";
   cout << theStr << endl;
   delete[] theStr;
   return 0;
}