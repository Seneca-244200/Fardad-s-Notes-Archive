#include <iostream>
#include "Utils.h"
#include "sorting.h"
using namespace std;
using namespace sdds;

template <typename T>
T maxof(T a, T b) {
   return a > b ? a : b;
}
//template<>
//const char* maxof<const char*>(const char* a, const char* b) {
//   return ut.strcmp(a, b) > 0 ? a: b;
//}

const char* maxof(const char* a, const char* b) {
   return ut.strcmp(a, b) > 0 ? a : b;
}


int main() {
   double a = 123.56;
   double b = 234.56;
   char n[] = "Fred";
   char m[] = "Jay";
   cout << maxof(a, b) << endl;
   cout << maxof(m, n) << endl;
   return 0;
}