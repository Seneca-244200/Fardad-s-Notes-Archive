#include <iostream>
using namespace std;

int main() {
   char name[81];
   int age;
   cout << "Hello, welcome to Seneca bar, what is you name? ";
   cin >> name;
   cout << "Hi " << name << ", how old are you? ";
   cin >> age;
   if (age > 19) {
      cout << "What would you like to drink?" << endl;
   }
   else {
      cout << "Get out of here..." << endl;
   }
   return 0;
}