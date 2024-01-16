#include <iostream>
using namespace std;
int main( ) {
   char name[51];
   int age;
   cout << "Hello welcome to SeneBar, what is your name?" << endl << "> ";
   cin >> name;
   cout << "Hello " << name << ", how old are you?" << endl << "> ";
   cin >> age;
   if ( age >= 19 ) {
      cout << "What would you like to drink?...." << endl;
   }
   else {
      cout << "Get out and come back when you grow up!" << endl;
   }
   return 0;
}