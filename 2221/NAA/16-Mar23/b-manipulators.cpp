#include <iostream>
#include <iomanip>
using namespace std;



int main() {
   cout << "*";
   cout.width(10);
   cout << "12" << "*" << endl;

   cout << "*" << setw(10) << "12" << "*" << endl;


   return 0;
}