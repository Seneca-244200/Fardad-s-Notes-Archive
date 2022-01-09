#include <iostream>
using namespace std;
int main() {
   int cnt;
   int i;
   int* num = nullptr;  //golden rule: always set unused and unassigned pointers to nullptr
   cout << "how many integers?" << endl << ">";
   cin >> cnt;
   num = new int[cnt];  // to request the operating system to allcoate new memory and send it's address back;
   if (num) {
      for (i = 0; i < cnt; i++) {
         cout << (i + 1) << "> ";
         cin >> num[i];
      }
      cout << "You Entered: " << endl;
      for (i = 0; i < cnt; i++) {
         cout << (i + 1) << "> " << num[i] << endl;
      }
      delete[] num;
   }
   else {
      cout << "out of memory!" << endl;
   }
   return 0;
}
