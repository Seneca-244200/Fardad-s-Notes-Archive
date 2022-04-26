#include <iostream>
using namespace std;
void line(char fill='-', int length = 75);
// line(char fill); is no longer needed
// void line();  is no longer needed

int main() {
   line('^', 45);   // line_char_int
   line('*');       // line_char
   line();          // line 
   return 0;
}

void line(char fill, int length) { // line_char_int
   for (int i = 0; i < length; cout << fill, i++);
   cout << endl;
}

