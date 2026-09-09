
#include <iostream>
using namespace std;
int getInt() {
   int num{};
   bool done = false;
   do {
      cin >> num;
      if (cin.fail()) {
         cin.clear(); 
         cin.ignore(10000, '\n');
         cout << "Bad Integer, pleasy try again\n> ";
      }
      else {
         char ch = cin.get();
         if (ch == '\n') {
            done = true;
         }
         else {
            cin.ignore(10000, '\n');
            cout << "Only and integer number\n> ";
         }
      }
   } while (!done);
   return num;
}


int main() {
   cout << "OOP244NAA - Jun03" << endl;
   cout << "Age: ";
   int age = getInt();

   cout << "You are " << age << " years old!" << endl;

   cout << "Another age: ";
   age = getInt();

   cout << "and you are " << age << " years old!" << endl;

   return 0;
}