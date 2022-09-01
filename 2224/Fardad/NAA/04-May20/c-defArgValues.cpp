#include <iostream>
using namespace std;
void hr(char fill = '=', int length = 79);
void hr(int length);

int main() {
   hr('+', 35);
   hr('-');
   hr();
   hr(50);
   return 0;
}

void hr(char fill, int length) {     //  hr_char_int
   for (int i = 0; i < length; i++) cout << fill;
   cout << endl;
}

void hr(int length) {              // hr_int
   hr('-', length);
}
