#include <iostream>
using namespace std;
int main() {
   char str[100];
   cin.ignore(); // ignore one char
   cin.getline(str, 100, '\n');
   cout << str << endl;


   cin.ignore(10); // ignore 10 chars
   cin.getline(str, 100, '\n');
   cout << str << endl;
   // folling is wrong and a bug, do not do this.
   cin.ignore('\n'); // ignore 10 chars (ascii code of '\n')
   cin.getline(str, 100, '\n');
   cout << str << endl;
   
   
   cin.ignore(15, '\n'); // ignore up to '\n' (
   cin.getline(str, 100, '\n');
   cout << str << endl;
   return 0;
}

