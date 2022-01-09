#include <iostream>
#include "FullName.h"
using namespace std;
using namespace sdds;
void showFullName(FullName theFullName) {
   cout << theFullName << endl;
}
int main() {
   //FullName N = { "John", "Doe" };
   //FullName N { "John", "Doe" };
   FullName N("John", "Doe");
   FullName M("Freddie", "Mercury");
   cout << N << endl;
   showFullName(N); // N will be copied
   N = M; 
   showFullName(N);
   return 0;
}