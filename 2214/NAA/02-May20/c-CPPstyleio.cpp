#include <iostream>
using namespace std;

int main() {
   int age;
   cout << "hello there!\nHow old are you? ";
   cin >> age;
   if (age < 16) {
  //    printf("Isn't %d years old too young to be in college!\n", age);
      cout << "Isn't " << age << " years old too young to be in college!" << endl;
   }
   else {
      cout << "Welcome to oop244" << endl;
   }
   return 0;
}