#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[2096]{};
   char ch{};
   fin.getline(str, 15,'\n');// the delim by default is '\n'
   cout << str << endl;
   if(fin) {
      cout << "getline(str,n) did not fail" << endl;
      fin.get(ch);
      cout << "char is " << int(ch) << "(" << ch << ")" << endl;
   }
   else{
      cout << "getline(str,n) did fail, clear is needed to continue" << endl;
      fin.clear();
      fin.getline(str, 100, '\n');// the delim by default is '\n'
      cout << "the rest are: >" << str << "<" << endl;
   }

   return 0;
}