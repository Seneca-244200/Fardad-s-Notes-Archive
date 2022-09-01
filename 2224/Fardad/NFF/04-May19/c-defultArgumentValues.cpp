#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;
void hr(char fill = '-', int length = 79);
void hr(int lenght);
int main() {
   hr('#', 50);
   hr('+');
   hr();
   hr(90);
   return 0;
}
void hr(char fill, int length) {      // hr_char_int
   for (int i = 0; i < length; i++) cout << fill;
   cout << endl;
}
void hr(int lenght) {               // hr_int
   hr('=', lenght);
}