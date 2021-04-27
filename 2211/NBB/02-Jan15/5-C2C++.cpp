#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
   char name[128];
   int age;
   cout << "What is your name? ";
   cin >> name;
   cout << "What is your age? ";
   cin >> age;
   cout << "Hello " << name << " , welcome to oop244!" << endl;
   if (age < 18) {
      cout << "Isn't " << age << " years old too young to be in this class?" << endl;
   }
   return 0;
}