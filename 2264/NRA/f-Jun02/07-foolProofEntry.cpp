#include <iostream>
using namespace std;
int getInt() {
   int num{};
   bool done{};
   do {
      cin >> num;
      if (cin) {
         done = true;
      }
      else {
         cin.clear();
         cout << "Bad Integer, try again\n> ";
      }
      cin.ignore(10000, '\n');
   } while (!done);
   return num;
}

int main() {
   int a;
   cout << "Number: ";
   a = getInt();
   cout << "You enterd: " << a << endl;
   return 0;
}