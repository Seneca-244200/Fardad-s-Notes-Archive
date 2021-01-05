#include <iostream>
using namespace std;
void leftInKeyboard() {
   int ch;
   while ((ch = cin.get()) != '\n') {
      cout << char(ch);
   }
   cout << endl;
}
int main() {
   char str[51];
   cout << "Enter a Cstring: ";
   cin.get(str, 5, 'n');
   cout << "|" << str << "|" << endl;
   leftInKeyboard();
   return 0;
}