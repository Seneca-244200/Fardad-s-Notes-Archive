#include <iostream>
#include <sstream>
#include "search.h"

using namespace std;
using namespace seneca;

void printResult(bool passed, const char* message) {
   if (passed) {
      cout << "[PASS] " << message << endl;
   }
   else {
      cout << "[FAIL] " << message << endl;
   }
}

int main() {
   int total = 0;
   int passed = 0;

   int nums[] = { 10, 20, 30, 20, 50, 20 };
   double prices[] = { 1.5, 2.5, 1.5, 3.0 };
   char letters[] = { 'A', 'B', 'C', 'B', 'D' };
   Name names[] = { "Ali", "Sara", "John", "Sara", "Mina" };

   bool ok;

   ok = isEqual(10, 10) == true;
   total++;
   passed += ok;
   printResult(ok, "Generic isEqual works for int equal values");

   ok = isEqual(10, 20) == false;
   total++;
   passed += ok;
   printResult(ok, "Generic isEqual works for int different values");

   ok = isEqual(1.5, 1.5) == true;
   total++;
   passed += ok;
   printResult(ok, "Generic isEqual works for double equal values");

   ok = isEqual('A', 'B') == false;
   total++;
   passed += ok;
   printResult(ok, "Generic isEqual works for char different values");

   ok = isEqual(Name("Sara"), Name("Sara")) == true;
   total++;
   passed += ok;
   printResult(ok, "Specialized isEqual works for equal Name objects");

   ok = isEqual(Name("Sara"), Name("Ali")) == false;
   total++;
   passed += ok;
   printResult(ok, "Specialized isEqual works for different Name objects");

   ok = findIndex(nums, 6, 20) == 1;
   total++;
   passed += ok;
   printResult(ok, "findIndex finds first matching int");

   ok = findIndex(nums, 6, 99) == -1;
   total++;
   passed += ok;
   printResult(ok, "findIndex returns -1 when int not found");

   ok = findIndex(prices, 4, 1.5) == 0;
   total++;
   passed += ok;
   printResult(ok, "findIndex works for doubles");

   ok = findIndex(letters, 5, 'B') == 1;
   total++;
   passed += ok;
   printResult(ok, "findIndex works for chars");

   ok = findIndex(names, 5, Name("Sara")) == 1;
   total++;
   passed += ok;
   printResult(ok, "findIndex works for Name objects");

   ok = findIndex(names, 5, Name("Reza")) == -1;
   total++;
   passed += ok;
   printResult(ok, "findIndex returns -1 for missing Name");

   ok = countOccurrences(nums, 6, 20) == 3;
   total++;
   passed += ok;
   printResult(ok, "countOccurrences counts ints correctly");

   ok = countOccurrences(prices, 4, 1.5) == 2;
   total++;
   passed += ok;
   printResult(ok, "countOccurrences counts doubles correctly");

   ok = countOccurrences(letters, 5, 'B') == 2;
   total++;
   passed += ok;
   printResult(ok, "countOccurrences counts chars correctly");

   ok = countOccurrences(names, 5, Name("Sara")) == 2;
   total++;
   passed += ok;
   printResult(ok, "countOccurrences counts Name objects correctly");

   {
      ostringstream os;
      printCSV(nums, 6);
      printCSV(nums, 6, os);

      ok = os.str() == "10,20,30,20,50,20\n";
      total++;
      passed += ok;
      printResult(ok, "printCSV prints int array correctly");
   }

   {
      ostringstream os;
      cout.setf(ios::fixed);
      os.setf(ios::fixed);
      cout.precision(1);
      os.precision(1);
      printCSV(prices, 4);
      printCSV(prices, 4, os);

      ok = os.str() == "1.5,2.5,1.5,3.0\n";
      total++;
      passed += ok;
      printResult(ok, "printCSV prints double array correctly");
   }

   {
      ostringstream os;
      printCSV(letters, 5);
      printCSV(letters, 5, os);

      ok = os.str() == "A,B,C,B,D\n";
      total++;
      passed += ok;
      printResult(ok, "printCSV prints char array correctly");
   }

   {
      ostringstream os;
      printCSV(names, 5);
      printCSV(names, 5, os);

      ok = os.str() == "Ali,Sara,John,Sara,Mina\n";
      total++;
      passed += ok;
      printResult(ok, "printCSV prints Name array correctly");
   }

   cout << endl;
   cout << "Passed " << passed << " of " << total << " tests." << endl;

   if (passed == total) {
      cout << "All tests successful!" << endl;
   }
   else {
      cout << "Some tests failed!" << endl;
   }

   return 0;
}