#include <iostream>
using namespace std;
void getint(int& vout) {
   int val{};
   cin >> val;
   if(val < 10 || val >20)
      cin.setstate(ios::failbit);
   else
      vout = val;
}

int main() {
   int value{};
   cout << "enter an int between 10 and 20: ";
   getint(value);
   if(cin) {
      cout << "value is: " << value << endl;
   }
   else {
      cout << "invalid number!" << endl;
      cin.clear();
   }
   return 0;
}
