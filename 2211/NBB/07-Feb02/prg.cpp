#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
   ofstream myfout("mydata.txt");
   cout <<setw(10)<<setfill('0')<<left<<fixed<<setprecision(2)<< 10.0 <<"*"<<
      setw(5) <<setfill(' ')<<right<< "ab" << "*" <<
      setw(10)<<left<< 123 << "*" << endl;

   myfout << setw(10) << setfill('0') << left << fixed << setprecision(2) << 10.0 << "*" <<
      setw(5) << setfill(' ') << right << "ab" << "*" <<
      setw(10) << left << 123 << "*" << endl;


   return 0;
}