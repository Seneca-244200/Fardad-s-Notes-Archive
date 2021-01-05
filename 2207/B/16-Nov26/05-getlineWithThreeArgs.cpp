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
   cin.getline(str, 5, 'e');
   cout << "|" << str << "|" << endl;
   leftInKeyboard();
   return 0;
}