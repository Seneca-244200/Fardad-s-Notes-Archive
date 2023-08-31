#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   fin.ignore();
   fin >> str; // extracts up to whitespace not extracting the whitespace
   cout << ">" << str << "<" << endl;
   fin.ignore(3);
   fin >> str;
   cout << ">" << str << "<" << endl;
   fin.ignore(1000,'<');
   fin >> str;
   cout << ">" << str << "<" << endl;
   fin.ignore(3, ' ');
   fin >> str;
   cout << ">" << str << "<" << endl;
   fin.ignore('\n'); // is infact fin.ignore(10); which is the ascii code of '\n'
   fin >> str;
   cout << ">" << str << "<" << endl;
   return 0;
}