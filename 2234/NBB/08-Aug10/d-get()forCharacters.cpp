#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ifstream fin("prg.cpp");
   char str[4096]{};
   char ch{};
   ch = fin.get(); // at end of file it will return EOF instead
   cout << ch << endl;
   fin.get(ch);
   cout << ch << endl;
   while(fin.get(ch)) {
      cout << ch;
   }
   return 0;
}