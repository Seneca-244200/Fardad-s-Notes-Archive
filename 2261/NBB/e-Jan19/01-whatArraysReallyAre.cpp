#include <iostream>
using namespace std;
int main( ) {
   int ar[5]{ 10, 20, 30, 40, 50 };
   int* p = ar;
   cout << *(ar + 0) << " is the same as " << ar[0] << endl;
   cout << *(ar + 1) << " is the same as " << ar[1] << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << p[i] << " ";
   }
   cout << endl;
   return 0;
}

/*

   int cnt{};
   cout << "Please enter the number of integer numbers:\n> ";
   cin >> cnt;


*/