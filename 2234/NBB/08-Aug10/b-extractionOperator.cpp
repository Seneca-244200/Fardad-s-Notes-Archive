



             #include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin >> str;
   cout << ">" << str << "<" << endl;
   return 0;
}