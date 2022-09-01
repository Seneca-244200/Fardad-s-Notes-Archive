#include <iostream>
using namespace std;
// cout global object that is an instance of ostream
// cin global object thati is an isntance of istream 

int main() {
   char name[81];
   int age;
   cout << "Hi my name is Fred Soley and I am " << 40 << " years old!" << endl;
   cout << "What is your name?" << endl << "> ";
   cin >> name;
   cout << "And you age is?" << endl << "> ";
   cin >> age;
   cout << "Hello " << name << ", are you really " << age << " years old?" << endl;
   return 0;
}