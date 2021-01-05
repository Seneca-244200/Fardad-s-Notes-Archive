#include <iostream>
using namespace std;
int main() {
   char name[51];
   int age;
   cout << "What is your name and age: ";
   cin >> name >> age;
   cout << "Hello my name is "<<name<<" and I am ";
   cout.width(20);
   cout << age << " years old!\n";
   return 0;
}