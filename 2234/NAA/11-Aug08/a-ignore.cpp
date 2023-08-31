#include <iostream>
using namespace std;
int main() {
   char str[81];
   cin.ignore(); // one char
   cin.ignore(10); // ignore 10 char
   //cin.ingore('\n') same as above
   cin.ignore(10, 'x'); //ignore 10 chars or upto 'x ' whichever comes frist
   // cin.ignore(10000,'\n');
   cin >> str;
   cout << ">" << str << "<" << endl;
   return 0;
}