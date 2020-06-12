#include <iostream>
using namespace std;
class Container {
   int data;
public:
   Container(int d) :data(d) {}
   ostream& display(ostream& os)const {
      return os << data;
   }
};
ostream& operator<<(ostream& os, class Container& C) {
   return C.display(os);
}
void bar(int);  // void bar_int
void bar(int, char);  // void bar_int_char
int main() {
   int i;
   Container X(12345);
   i = 3.99;
   cout << i << " " << 1 << " " << 2.2 << " " << X << endl;
   i = 45;
   cout << i << " " << 1 << " " << 2.2 << " " << X << endl;
   i = 'A';
   cout << i << " " << 1 << " " << 2.2 << " " << X << endl;
   X = 32;
   cout << i << " " << 1 << " " << 2.2 << " " << X << endl;
   return 0;
}