#include <iostream>
using namespace std;
int main() {
   char c{};
   int i;
   cout << "Enter 2 chars and an integer: ";
   c = cin.get(); //single char
   cout << c << endl;
   cin.get(c) >> i;
   cout << c << endl;
   cout << i << endl;
   return 0;
}