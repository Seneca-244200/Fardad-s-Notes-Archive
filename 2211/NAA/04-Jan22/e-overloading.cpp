#include <iostream>
using namespace std;
void line(char fill, int len);  // line_char_int
void line(int len);             // line_int
void line();                    // line
//void line(double value);        // line_double

int main() {
   line(60);
   line();
   line('@', 50);
   line(3.99999999); // this  is a three
   return 0;
}
//void line(double value) {
//   cout << "Line has nothing to do with " << value << endl;
//}
void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
void line(int len) {
   line('-', len);
}
void line() {
   line('-', 70);
}



/*
for (start; cond ;last){ 
   body;
}
out ;


start;
while(cond){
   body;
   last;
}
out ;



*/