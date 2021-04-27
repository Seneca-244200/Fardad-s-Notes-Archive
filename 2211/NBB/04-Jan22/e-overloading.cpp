#include <iostream>
using namespace std;
void line(char fill, int len);  // ovarloaded 3 time. 
void line(char fill);
void line();
//void line(double dbl);
int main() {
   line('=', 50);
   line('@');
   line();
//   line(23.45);
   return 0;
}
//void line(double dbl) {
//   cout << "Does make sense to draw a line with a double " << dbl << endl;
//}
void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
void line(char fill) {
   line(fill, 70);
}
void line() {
   line('-');
}