#include <iostream>
using namespace std;
int main() {
   int a[15] = { 1,2,0,3,0,4,2,6,4,3,5,1,1,6,8 };
   int i;
   int num = 0;
   for (i = 0; i < 15; i++) {
      (a[i] < 4) && (num += 1);
   }
   cout << "There are " << num << " numbers less than 4!" << endl;
   return 0;
}

void prnStr(const char* str) {
   if(str != nullptr && strlen(str) == 0)
   if (str && str[0] == 0 ){
      cout << "nothing to print" << endl;
   }
   else {
      cout << str << endl;
   }
}