#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   cout <<setw(10)<<setfill('0')<<left<<fixed<<setprecision(2)<< 10.0 <<"*"<<
      setw(5) <<setfill(' ')<<right<< "ab" << "*" <<
      setw(10)<<left<< 123 << "*" << endl;


   return 0;
}