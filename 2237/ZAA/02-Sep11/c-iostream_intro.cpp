#include <iostream>
using namespace std;
int main( ) {
   cout << "Hello OOP244ZAA Bar!" << endl;
   char name[81];
   unsigned int age;
   cout << "May I have your name?" << endl << "> ";
   cin >> name;
   cout << "Hello again " << name << ", how old are you?" << endl << "> ";
   cin >> age;
   if ( age >= 19 ) {
      cout << "Welcome, how may I serve you?..." << endl;
   }
   else {
      cout << name << " get out of here and come back when you grow up..." << endl;
   }

   return 0;
}
