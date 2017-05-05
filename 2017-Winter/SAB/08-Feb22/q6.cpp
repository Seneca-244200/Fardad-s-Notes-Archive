#include <iostream>   // essentials 3
using namespace std;
int main() {
   int num;       // 2 marks
   double* vals;
   int lix = 0;
   int i;
   cout << "Please enter number of doubles values: ";   // 1 mark
   cin >> num;
   vals = new double[num];  // 3 mark
   cout << "Please enter the values:" << endl;
   for (i = 0; i < num; i++) {  // 2 marks
      cout << i + 1 << "> ";
      cin >> vals[i];
   }
   for (i = 1; i < num; i++) {     // 3 marks
      if (vals[i] > vals[lix]) {
         lix = i;
      }
   }
   cout << "Values entered: " << endl;
   for (i = 0; i < num; i++) {   // 2 marks
      cout << (i + 1) << ": " << vals[i] << (i == lix ? " <-- Largest" : "") << endl;
   }
   delete[] vals;   //2 marks
   return 0;
}
/*
Output sample:
Please enter number of doubles values: 4
Please enter the values:
1> 12.34
2> 34.56
3> 34.44
4> 1.3
Values entered:
1: 12.34
2: 34.56<-- Largest
3: 34.44
4: 1.3

*/