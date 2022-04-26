#include <iostream>
using namespace std;

int main() {
   int num;
   char str[81];
   cout << "Enter num 123: ";
   cin.ignore(2);// ignore 2 characters
   cin >> num;  // \n remain in keyboard
   cout << "num: " << num << endl;
   cout << "Enter abcdefghijklmnopqrstuvwxyz: ";
   cin.ignore(2);// ignore 2 characters
   cin >> str;
   cout << "str: " << str << endl;
   return 0;
}