#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char ch;
//   while(!fin.get(ch).fail()) {
   while(fin.get(ch)) {
      cout << ch;
   }
   return 0;
}