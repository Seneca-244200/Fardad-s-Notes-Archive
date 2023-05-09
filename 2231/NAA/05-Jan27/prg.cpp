#include <iostream>

using namespace std;
void getMark(int& mark) {
   cin >> mark;
   if (mark < 0 || mark > 100) cin.setstate(ios::failbit);
}

int main() {
   int mark;
   cout << "Mark: ";
   getMark(mark);
   if (!cin) {
      cout << "invalid mark!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
   }
   else {
      cout << "you got: " << mark << endl;
   }
   return 0;
}
