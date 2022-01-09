#include <iostream>
#include "ClsLog.h"
using namespace std;
using namespace sdds;
void getPhone(int& area, int& phoneno) { //(416)4915050
   char ch;
   cin >> ch;
   if (ch != '(') cin.setstate(ios::failbit);
   cin >> area;
   if (area > 999 || area < 100) cin.setstate(ios::failbit);
   cin >> ch;
   if (ch != ')') cin.setstate(ios::failbit);
   cin >> phoneno;
   if (phoneno > 9999999 || phoneno < 1000000) cin.setstate(ios::failbit);
   ch = cin.peek();
   if (ch != '\n') {
      cin.setstate(ios::failbit);
   }
}

int main() {
   int area, phone;
   bool done;
   cout << "Phone number: ";
   do {
      done = true;
      getPhone(area, phone);
      if (cin.fail()) {
         cout << "Invalid phone number, (999)9999999: ";
         done = false;
         cin.clear();
      }
      cin.ignore(1000, '\n');
   } while (!done);
   cout << "The number is: (" << area << ")" << phone << endl;
   return 0;
}