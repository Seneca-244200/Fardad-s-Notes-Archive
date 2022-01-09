#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

char* getDynCstr(istream& istr = std::cin);


int main() {
   char* name;
   cout << "Enter your name: ";
   name = getDynCstr();
   cout << "hello Fardad" << endl;
   delete[] name;


   return 0;
}

char* getDynCstr(istream& istr ) {
   char temp[1024];
   char* toRet{};
   istr.getline(temp, 1024);
   if (istr) {
      toRet = new char[strlen(temp) + 1];
      strcpy(toRet, temp);
   }
   return toRet;
}

