#include <iostream>
using namespace std;
int main() {
   char str[50];
   char inKeyboard[50];
   //char ch;
   //ch = cin.get(); <<-- return int
   //cin.get(ch);  <<--- returns the cin
   //if(cin.get(ch).fail()) <<-- second version makes this possible

   cout << "Enter a string: ";
   cin.get(str, 5);
   cout << str << endl;
   cin.ignore(2000, '\n');
   cout << "Enter a string: ";
   cin.get(str, 5, 'd');
   cout << str << endl;
   cin.get(inKeyboard, 50, '\n');
   cout << inKeyboard << endl;
   cin.ignore(2000, '\n');
   cout << "Enter a string: ";
   cin.getline(str, 5, 'd');
   cout << str << endl;
   cin.getline(inKeyboard, 50);
   // cin.getline(inKeyboard, 50, '\n'); this is same as the above
   cout << inKeyboard << endl;
   return 0;
}