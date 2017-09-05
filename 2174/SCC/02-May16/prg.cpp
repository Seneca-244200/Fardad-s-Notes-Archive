#include <iostream>
using namespace std;
int main() {
   char name[51];
   int age;
   cout << "What is you name amd how old are you? ";
   cin >> name >> age;
   cout << "Hello, " << name << " you are " << age << " years old!" << endl;
   return 0;
}