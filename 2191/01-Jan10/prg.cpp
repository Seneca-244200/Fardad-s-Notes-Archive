#include <iostream>
using namespace std;
int main() {
   char name[81];
   int age;
   cout << "What is your name? ";
   cin >> name;
   cout << "How old are you? ";
   cin >> age;
   cout << "you are " << name << " and you are " << age << " years old!" << endl;
   return 0;
}