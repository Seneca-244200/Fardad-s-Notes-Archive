#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin.get(str, 30);
   cout << "30?" << str << "?" << endl;
   fin.ignore(100, '\n');
   fin.get(str, 30);
   cout << "30?" << str << "?" << endl;
   fin.get(str, 30);
   cout << "30?" << str << "?" << endl;
   // get will only fail if the delimiter
   // is the first character
   if(!fin) {
      cout << "get hit the delimiter before anything" << endl;
      fin.clear();
      fin.ignore(100, '\n');
   }
   fin.get(str, 10);
   cout << "10?" << str << "?" << endl;
   fin.get(str, 10,'c');
   cout << "10(delim:c)?" << str << "?" << endl;
   fin.get(str, 10);
   cout << "10?" << str << "?" << endl;

   return 0;
}