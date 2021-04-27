#include <iostream>
using namespace std;
int main() {
   cout.setf(ios::left);
   cout.width(10);
   cout << 10 << "*left" << endl;
   cout.unsetf(ios::left);


   cout.width(20);
   cout.setf(ios::right);
   cout << "abc" << "*right" <<  endl;
   cout.width(10);
   cout.unsetf(ios::right);

   cout.setf(ios::left);
   cout << "in 10" << "*left" << endl;
   cout.unsetf(ios::left);

   cout.width(15);
   cout << "in 15" <<"*right by default"<< endl;

   return 0;
}