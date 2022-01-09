#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int alocUnit = 5;
char* getDynCstring(const char* prompt = nullptr) {
   bool done = false;
   if (prompt) cout << prompt;
   char* cstr = new char[alocUnit];
   char* toRet = cstr;
   int size = alocUnit;
   int nullindex = 1;
   do {
      cin.getline(cstr, alocUnit);
      if (cin.fail()) {
         char* temp = new char[size + alocUnit];
         strcpy(temp, toRet);
         delete[] toRet;
         toRet = temp;
         cstr = &toRet[size - nullindex++];
         size += alocUnit;
         cin.clear();
      }
      else {
         done = true;
      }
   } while (!done);
   char* temp = new char[strlen(toRet) + 1];
   strcpy(temp, toRet);
   delete[] toRet;
   toRet = temp;
   return toRet;
}
int main() {
   char* name;
   name = getDynCstring("Please enter your name: ");
   cout << "hello " << name << endl;
   delete[] name;
   return 0;
}