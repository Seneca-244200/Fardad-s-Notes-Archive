#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   fin.get(str, 11);
   cout << str << endl;
   return 0;
}