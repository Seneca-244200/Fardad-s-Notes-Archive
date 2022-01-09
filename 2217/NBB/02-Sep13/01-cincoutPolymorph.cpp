#include <iostream>
using namespace std;
int main() {
   char name[50];
   int age;
   double money;
   cout << "Your name: ";
   cin >> name;
   cout << "Your age: ";
   cin >> age;
   cout << "Money in your pocket: ";
   cin >> money;
   cout << "Hello " << name << "." << endl;
   cout << "you are " << age << " years old, holding " << money << " Dollars in your pocket!" << endl;
   return 0;

}