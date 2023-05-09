#include <iostream>
using namespace std;
void setTo100(int& ref) {
   ref = 100;
}
void setTo100(int* ptr) {
   *ptr = 100;
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
   cout << (unsigned)&r << " - " << (unsigned)&a << endl;
   r = 50;
   cout << a << endl;
   setTo100(a);// setTo100(int& ref = a);
   cout << a << endl;
   a = 50;
   setTo100(&a);
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