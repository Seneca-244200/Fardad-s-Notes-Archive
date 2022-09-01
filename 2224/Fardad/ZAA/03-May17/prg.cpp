
#include <iostream>
using namespace std;
void hr(char fill, int length) {
   for (int i = 0; i < length; i++) cout << fill;
   cout << endl;
}
void hr(char fill) {
   hr(fill, 79);
}
void hr() {
   hr('-');
}
int main() {
   hr('-', 40);
   hr('+', 60);
   hr('=');
   hr();
   return 0;
}