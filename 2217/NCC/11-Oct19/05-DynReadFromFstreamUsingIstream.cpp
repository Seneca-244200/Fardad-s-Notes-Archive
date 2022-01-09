#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

char* getDynCstr(int maxLen = 1024, istream& istr = std::cin);

int main() {
   char* line;
   ifstream file("data.txt");
   line = getDynCstr(100, file);// by default reads from cin;
   if (line) {
      cout << line << endl;
   }
   else {
      cout << "line is too long, only 100 chars please" << endl;
   }
   delete[] line;
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
