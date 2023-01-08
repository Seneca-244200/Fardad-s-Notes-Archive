#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
void sayHello(Name N) {
   cout << "Hello " << N << endl;
}
int main() {
   char str[200];
   Name n = "Fred Soley";
   sayHello(n); // sayHello(Name N = n);
   sdds::strcpy(str, n);
   cout << "n contains " << str
      << " with lenght of " << int(n) << endl;
   return 0;
}