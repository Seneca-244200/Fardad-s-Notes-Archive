#include <iostream>
using namespace std;
int main() {
   char str[51];
   int ichar;
   char ch;
   ichar = cin.get();
   cin.get(ch)>>str;
   cout << "ichar, int: " << ichar << " char: " << char(ichar) << endl;
   cout << "ch, int: " << int(ch) << " char: " << ch << endl;
   cout << "|" << str << "|" << endl;
   return 0;
}