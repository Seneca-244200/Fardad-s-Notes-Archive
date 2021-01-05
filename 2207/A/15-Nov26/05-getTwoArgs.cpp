#include <iostream>
using namespace std;
void leftInKeyboard() {
   char ch;
   cout << "Left in keyboard:" << endl;
   while (cin.get(ch)) {
      cout << ch;
   }
   cout << endl;
}
int main() {
   char str[51];
   cout << "Enter a string: ";
   cin.get(str, 10);
   cout << str << endl;
   leftInKeyboard();
   return 0;
}