#include <iostream>
using namespace std;

int main() {
   char str[81];
   cout << "Enter abcdefghijklmnopqrstuvwxyz: ";
   // common mistake is to think that ignores
   // removes characters upto newline
   // but it actually remove int('\n') characters
   // from buffer that is 10 (10 being the asccii 
   // code of \n
   cin.ignore('\n');  
   cin >> str;
   cout << "str: " << str << endl;
   return 0;
}