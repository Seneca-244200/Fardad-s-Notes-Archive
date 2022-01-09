#include <iostream>
using namespace std;
int main() {
   int i = 10;
   int j = 20;
   cout << "enter i: ";
   cin >> i;
   if (!cin) { // if(cin.fail()){
      cin.clear(); // I understoo you failed
      cin.ignore(1000, '\n');
      cout << "Bad entry" << endl;
   }
   cout << "enter j: ";
   cin.ignore();
   cin.ignore(2);
   cin >> j;
   cout << endl << "i: " << i << endl << "j: " <<  j << endl;
   cin.ignore('\n');// will ingore 10 characters and not upto '\n'
   cin >> j;
   cout << "j: " << j << endl;
   return 0;
}

