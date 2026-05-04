#include <iostream>
using namespace std;

/// <summary>
/// Draws a bar for a future bar chart
/// </summary>
/// <param name="length">Length of the bar</param>
/// <param name="fill">Character to print the bar with</param>
void bar(int length = 79, char fill = '-');
void bar(char fill);
int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   bar(20, '*');
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


void bar(char fill) {
   bar(79, fill);
}
