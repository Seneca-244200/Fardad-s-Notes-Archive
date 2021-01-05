#include <iostream>
using namespace std;
int main() {
   char str[50];
   char inKeyboard[50];
   //char ch;
   //ch = cin.get();
   //cin.get(ch);
   cout << "Enter a string: ";
   cin.get(str, 5);
   cout << str << endl;
   cin.ignore(2000, '\n');
   cout << "Enter a string: ";
   cin.get(str, 5, 'd');
   cout << str << endl;
   cin.get(inKeyboard, 50, '\n');
   cout << inKeyboard << endl;
   cout << "Enter a string: ";
   cin.getline(str, 5, 'd');
   cout << str << endl;
   cin.getline(inKeyboard, 50, '\n');
   cout << inKeyboard << endl;
   return 0;
}