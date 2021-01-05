#include <iostream>
using namespace std;
int getInt();

int main() {
   int num;
   cout << "Enter an integer value: ";
   num = getInt();
   cout << "You entered: " << num << endl;
   return 0;
}

int getInt() {
   int value;
   bool badEntry;
   char nextChar = char(0);
   do {
      badEntry = false;
      cin >> value;
      if (cin.fail()) {
         cout << "Bad integer, retry: ";
         cin.clear();
         cin.ignore(3000, '\n');
         badEntry = true;
      }
      else {
         nextChar = cin.get();
         if (nextChar != '\n') {
            cout << "Only enter an integer, retry: ";
            cin.ignore(3000, '\n');
            badEntry = true;
         }
      }
   } while (badEntry);
   return value;
}