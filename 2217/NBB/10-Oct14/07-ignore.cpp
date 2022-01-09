#include <iostream>
using namespace std;
int main() {
   int i = 10;
   int j = 20;
   cout << "enter i: ";
   cin >> i;
   if (!cin) { //if(!cin.fail())
      cin.clear(); // I got it I am sorry
      cin.ignore(1000, '\n');
   }
   cout << "Enter j: ";
   cin >> j;
   cout << endl << "i: " << i << endl << "j: " << j << endl;
   return 0;
}

