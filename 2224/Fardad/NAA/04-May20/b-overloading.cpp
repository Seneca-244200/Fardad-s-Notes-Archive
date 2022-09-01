#include <iostream>
using namespace std;
void hr(char fill, int length) {     //  hr_char_int
   for (int i = 0; i < length; i++) cout << fill;
   cout << endl;
}
void hr(char fill) {               // hr_char
   hr(fill, 79);
}
void hr() {                        // hr
   hr('=', 79);
}
void hr(int length) {              // hr_int
   hr('-', length);
}
// overloading in C++ is one of the implemetaions of polymorphism
int main() {
   hr('+', 35);
   hr('-');
   hr();
   hr(50);
   hr(100);
   hr('+');
   return 0;
}