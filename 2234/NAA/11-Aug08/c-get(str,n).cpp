#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[2096]{};
   char ch{};
   fin.get(str,500);// the delim by default is '\n'
   cout << str << endl;
   if(fin) {
      cout << "get(str,n) did not fail" << endl;
      fin.get(ch);
      cout << "char is " << int(ch) << "(" << ch << ")" << endl;
   }
   else{
      cout << "get(str,n) did fail" << endl;
   }

   return 0;
}