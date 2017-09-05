#include <iostream>
using namespace std;
int main() {
   char name[51];
   int age;
   cout << "What is you name? ";
   cin >> name;
   cout << "How old are you? ";
   cin >> age;
   cout << "Hello, " << name << " you are " << age << " years old!" << endl;
   return 0;
}