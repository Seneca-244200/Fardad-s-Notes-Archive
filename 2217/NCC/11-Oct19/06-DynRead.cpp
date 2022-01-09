#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

char* getDynCstr(istream& istr = std::cin);

int main() {
   char* line;
   ifstream file("bigline.txt");
   line = getDynCstr(file);// by default reads from cin;
   if (line) {
      cout << line << endl;
   }
   else {
      // this will never happen
      cout << "Not enough memory, Something went horribly wrong!!!" << endl;
   }
   delete[] line;
   return 0 ;
}
const int allocUnit = 128;
char* getDynCstr( istream& istr) {
   bool done = false;
   int size = allocUnit;
   char* readMem = new char[allocUnit];
   char* curpos = readMem;
   char* toRet{};
   do {
      istr.getline(curpos, allocUnit);
      if (istr) {
         done = true;
      }
      else {
         // beg resizing
         char* newalloc = new char[size + allocUnit];
         strcpy(newalloc, readMem);
         delete[] readMem;
         readMem = newalloc;
         // end resizing
         curpos = &readMem[strlen(readMem)]; // you optimize this
         size += allocUnit; // always a bit bigger, fix this
         istr.clear();
      }
   }while(!done);
   // resize to fit the exact size of data;
   toRet = new char[strlen(readMem) + 1];
   if (toRet) {
      strcpy(toRet, readMem);
   }
   delete[] readMem;
   // resizing is done
   return toRet;
}
