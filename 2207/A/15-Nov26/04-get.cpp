#include <iostream>
using namespace std;
int main() {
   char str[51];
   char ch;
   int ichar;
   ichar = cin.get();
   cin.get(ch) >> str;
   cout << "ichar, int: " << ichar << " char: " << char(ichar) << endl;
   cout << "char, int: " << int(ch) << " char: " << ch << endl;
   cout << "str: " << str << endl;
   return 0;
}