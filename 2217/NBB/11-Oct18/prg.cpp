#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

char* getDynCstr(istream& istr = std::cin);

int main() {
   char* name;
   cout << "Name: ";
   name = getDynCstr();
   cout << "Hello " << name << endl;
   ifstream file("bigline.txt");
   delete[] name;
   name = getDynCstr(file);
   cout << name << endl << "done!" << endl;
   delete[] name;
   return 0;
}
const int allocUnit = 1024; // size of the pot
char* getDynCstr(istream& istr) {
   bool done = false;
   char* toRet = new char[allocUnit];
   char* curPos = toRet;
   int size = allocUnit;
   // getline(pointer, len); len, is the array size no string
   do {
      istr.getline(curPos, allocUnit);
      if (istr) { // if(!istr.fail()){
         done = true;
      }
      else {
         // beg resizing
         char* temp = new char[size + allocUnit];
         strcpy(temp, toRet);
         delete[] toRet;
         toRet = temp;
         // resized
         // change the strlen to some calculation for bonus marks
         curPos = &toRet[strlen(toRet)];
         size += allocUnit;
         istr.clear();
      }
   } while (!done);
   // resizing memory to the exact size of data;
      // change the strlen to some calculation for bonus marks
   char* temp = new char[strlen(toRet) + 1];
   strcpy(temp, toRet);
   delete[] toRet;
   toRet = temp;
   return toRet;
}