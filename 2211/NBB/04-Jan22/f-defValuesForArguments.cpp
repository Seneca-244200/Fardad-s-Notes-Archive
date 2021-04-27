#include <iostream>
using namespace std;
void line(char fill='-', int len = 70);  
int main() {
   line('=', 50);
   line('@');
   line();
   return 0;
}
void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
