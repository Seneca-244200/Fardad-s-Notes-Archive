#include <iostream>
#include <fstream>
using namespace std;
int main() {
   char ch;
   ifstream fin("prg.cpp");
//   ch = fin.get();
   fin.get(ch);
   cout << ">" << ch << "<" << endl;
   while(fin.get(ch)) {
//   while(!fin.get(ch).fail()) {
         cout << ch;
   }
   cout << "<<<<<<<" << endl;
   return 0;
}