#include <iostream>
#include "search.h"

using namespace std;
using namespace seneca;

int main() {
   int nums[] = { 10, 20, 30, 20, 50, 20 };
   double prices[] = { 1.5, 2.5, 1.5, 3.0 };
   char letters[] = { 'A', 'B', 'C', 'B', 'D' };
   Name names[] = { "Ali", "Sara", "John", "Sara", "Mina" };

   cout << "Integers:" << endl;
   printCSV(nums, 6);
   cout << "Index of 20: " << findIndex(nums, 6, 20) << endl;
   cout << "Count of 20: " << countOccurrences(nums, 6, 20) << endl;
   cout << endl;

   cout << "Doubles:" << endl;
   printCSV(prices, 4);
   cout << "Index of 1.5: " << findIndex(prices, 4, 1.5) << endl;
   cout << "Count of 1.5: " << countOccurrences(prices, 4, 1.5) << endl;
   cout << endl;

   cout << "Characters:" << endl;
   printCSV(letters, 5);
   cout << "Index of B: " << findIndex(letters, 5, 'B') << endl;
   cout << "Count of B: " << countOccurrences(letters, 5, 'B') << endl;
   cout << endl;

   cout << "Names:" << endl;
   printCSV(names, 5);
   cout << "Index of Sara: " << findIndex(names, 5, Name("Sara")) << endl;
   cout << "Count of Sara: " << countOccurrences(names, 5, Name("Sara")) << endl;
   cout << "Index of Reza: " << findIndex(names, 5, Name("Reza")) << endl;

   return 0;
}