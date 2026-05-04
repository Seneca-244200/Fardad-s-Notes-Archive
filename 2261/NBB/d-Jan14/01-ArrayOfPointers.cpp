#include <iostream>
using namespace std;

int main() {
   cout << "OOP244 NBB Jan 14" << endl;
   int i{};
   double nums[4]{ 2.2,1.1,4.4,3.3 };
   const double* up[4]{&nums[1], &nums[0], &nums[3], &nums[2]};
   double* down[4]{&nums[2], &nums[3], &nums[0], &nums[1]};
   for (; i < 4; i++) {
   }
   cout << "---------------" << endl;
   for (i = 0; i < 4; i++) {
      cout << *down[i] << endl;
   }
   return 0;
}