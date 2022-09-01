#include <iostream>
using namespace std;
/*
cin is a global object of type istream     (input stream)
cout is a global object of tyep ostream    (output stream)
*/
int main() {
   char name[81];
   int age;
   cout << "My name is Fred and I am " << 50 << " years old." << endl;
   cout << "What is your name?" << endl << "> ";
   cin >> name;
   cout << "and your age?" << endl << "> ";
   cin >> age;
   cout << "Hello " << name << ", you are " << age << " years old!";
   return 0;
}
