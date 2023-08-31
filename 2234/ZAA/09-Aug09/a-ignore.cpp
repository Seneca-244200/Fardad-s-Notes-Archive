#include <iostream>
using namespace std;
int main() {
   char str[256];
   cout << "> ";
   cin.ignore('\n');
//   cin.ignore(10);
   cin >> str;
   cout << ">" << str << "<" << endl;
   return 0;
}