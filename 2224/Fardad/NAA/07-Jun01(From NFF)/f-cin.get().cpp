#include <iostream>
using namespace std;
int main() {
   char c;
   cout << "Enter 2 chars: ";
   c = cin.get(); //single char
   cout << c << endl;
   cin.get(c);
   cout << c << endl;
   return 0;
}