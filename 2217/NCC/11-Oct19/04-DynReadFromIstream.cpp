#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* getDynCstr(int maxLen = 1024, istream& istr = std::cin);

int main() {
   char* name;
   cout << "Name: ";
   name = getDynCstr(10);// by default reads from cin;
   if (name) {
      cout << "Hello " << name << endl;
   }
   else {
      cout << "Too long, only 10 chars please" << endl;
   }
   delete[] name;
   return 0 ;
}

char* getDynCstr(int maxLen, istream& istr) {
   char* temp = new char[maxLen];
   char* toRet{};  // to make the size exactly equal to the date entry;
   istr.getline(temp, maxLen);
   if (istr) {// if(!istr.fail()){
      toRet = new char[strlen(temp) + 1];
      strcpy(toRet, temp);
   }
   else {
      istr.clear();
   }
   delete[] temp;
   return toRet;
}
