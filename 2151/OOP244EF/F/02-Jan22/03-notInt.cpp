#include <iostream>
using namespace std;

int main(){
   int a[10] = { 10, 5, 0, 40, 0, 60, 9, 0, 50, 0 };
   auto non_zero = 0;
   for (auto i = 0; i < 10; i++){
      non_zero += !!a[i];
   }
   cout << "number of non-zeros: " << non_zero << endl;
   return 0;
}

