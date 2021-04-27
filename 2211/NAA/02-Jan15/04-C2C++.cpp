#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
   char name[128];
   int age;
   cout << "What is your name? ";
   cin >> name;
   cout << "How old are you? ";
   cin >> age;
   cout << "Hello " << name << ", welcome to oop244 class!" << endl;
   if (age < 18) {
      cout << "isn't " << age << " years old too young to be in this class!" << endl;
   }
   return 0;
}