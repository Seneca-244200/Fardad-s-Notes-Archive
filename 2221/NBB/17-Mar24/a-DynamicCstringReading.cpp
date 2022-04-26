#include <iostream>
#include <string>
using namespace std;
char* getDynStr(char delim = '\n') {
   string str;
   getline(cin, str, delim);
   char* ret = new char[strlen(str.c_str()) + 1];
   strcpy(ret, str.c_str());
   return ret;
}
/*
char* getDynStr(char delim = '\n') {
   char* str = new char[100];
   loop{
      cin.getline(into str,100, delim);
      if (cin failed) {
         resize memory (add another 100) and 
         contine you look
      }
      else{
         end loop;
      }
   }
   final size adjustment;
   return str;
}
*/
int main() {
   return 0;
}