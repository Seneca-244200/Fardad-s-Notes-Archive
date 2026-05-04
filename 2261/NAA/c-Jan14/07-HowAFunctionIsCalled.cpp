#include <iostream>
using namespace std;

/// <summary>
/// Draws a bar for a future bar chart
/// </summary>
/// <param name="length">Length of the bar</param>
/// <param name="fill">Character to print the bar with</param>
void bar(int length, char fill);// bar_int_char
void bar(int length);           // bar_int
void bar();                     // bar
void bar(char fill);            // bar_char
int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   char star = '*';
   bar(20, star);// bar(int l = 20, char f = star);
   bar(40);
   bar();
   bar('=');
   return 0;
}

void bar(int l, char f) {
   for (int i = 0; i < l; i++) {
      cout << f;
   }
   cout << endl;
}

void bar(int length) {
   bar(length, '-');
}
void bar() {
   bar(79, '-');
}

void bar(char fill) {
   bar(79, fill);
}
