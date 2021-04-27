#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
   ofstream myfout("output.txt");
   cout << setw(10) << right << "123" << "*" 
      <<setw(10)<< left << 654 << "*" << endl;
   cout << fixed << setprecision(4) << 123.4567890 << endl;

   myfout << setw(10) << right << "123" << "*"
      << setw(10) << left << 654 << "*" << endl;
   myfout << fixed << setprecision(4) << 123.4567890 << endl;

   return 0;
}