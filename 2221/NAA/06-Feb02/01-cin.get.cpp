#include <iostream>
using namespace std;
int main() {
   char ch;
   cout << "Enter:abc<ENTER>" << endl;
   cout << "> ";
   ch = cin.get();  // overload number one
   cout << "ch(" << int(ch) << "): *" << ch << "*" << endl;
   ch = cin.get();
   cout << "ch(" << int(ch) << "): *" << ch << "*" << endl;
   cin.get(ch);   // overload number two 
   cout << "ch(" << int(ch) << "): *" << ch << "*" << endl;
   cin.get(ch);
   cout << "ch(" << int(ch) << "): *" << ch << "*" << endl;

   return 0;
}