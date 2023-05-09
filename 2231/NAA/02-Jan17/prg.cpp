#include <iostream>
using namespace std;
void setTo100(int& ref) {
   ref = 100;
}
bool read(int& val) {
   bool success = true;
   cin >> val;
   if (cin.fail()) {
      cin.clear(); // sorry go back to work
      cin.ignore(100000, '\n');
      success = false;
   }
   return success;
}
int main() {
   int a = 20;;
   int& r=a;
   int age;
   cout << r << endl;
   r = 50;
   cout << a << endl;
   setTo100(a);// setTo100(int& ref = a);
   cout << a << endl;
   cout << "Your age please: ";
   if (read(age)) {
      if (age >= 19) {
         cout << "What would you like to dring in Seneca bar?" << endl;
      }
      else {
         cout << "get out of here!" << endl;
      }
   }
   else {
      cout << "I ased for age you beeep!" << endl;
   }
   return 0;
}