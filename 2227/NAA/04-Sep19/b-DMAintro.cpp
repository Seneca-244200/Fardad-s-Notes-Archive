#include <iostream>
using namespace std;
int main() {
   int* array = nullptr;
   //int* array{}; universal way of initializing things to null
   int num;
   int* ip{};
   ip = new int;
   cout << "How many integers: ";
   cin >> num;
   array = new int[num];
   for (*ip = 0; *ip < num; (*ip)++) {
      cout << (*ip + 1) << ": ";
      cin >> array[*ip];
   }
   for (*ip = num - 1; *ip >= 0;  (*ip)--) {
      cout << array[*ip] << " ";
   }
   cout << endl;
   delete[] array;
   delete ip;
   array = nullptr;
   ip = nullptr;
   return 0;
}
