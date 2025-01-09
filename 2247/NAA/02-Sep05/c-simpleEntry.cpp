#include <iostream>
using namespace std;

int main( ) {
   int ipc = 144;
   int age;
   char ch;
   cout << "Hello OOP" << 244;
   cout << " from IPC" << ipc << "!" << endl;
   cout << "Welcome, how old are you\n> ";
   cin >> age;
   if ( age < 14 ) {
      cout << "Wow too young to be in college!" << endl;
   }
   else {
      cout << "Take a seat!" << endl;
   }
   cout << "Enter a character\n> ";
   cin >> ch;
   cout << "*" << ch << "*" << endl;
   return 0;
}