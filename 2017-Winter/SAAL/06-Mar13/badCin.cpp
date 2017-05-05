#include <iostream>
#include <fstream>
using namespace std;

int main() {
   int age;
   cout << "Please enter you age: ";
   cin >> age;
   if (cin.fail()) {
      cout << "bad int!";
   }
   else {
      cout << "You are " << age << " years old!";
   }
   return 0;
}