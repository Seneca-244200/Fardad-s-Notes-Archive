#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int a = 10;
   double b = 123.3456891;
   char message[123] = "hello";

   cout << setw(10) <<  a << "|";
   cout << setw(20) << fixed << setprecision(2) << b << "|";
   cout << setw(15) << left << message << "|" << endl;
   cout << "-------------------------------------------------------" << endl;
   cout.unsetf(ios::left);
   b = 234;
   cout << setfill('*') << setw(10) << a << "|";
   cout << setw(20) << b << "|";
   cout << setw(15) << left << message << "|" << endl;
   cout << "-------------------------------------------------------" << endl;

   return 0;
}

