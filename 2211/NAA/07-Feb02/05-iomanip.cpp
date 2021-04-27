#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   cout << setw(10) << right << "123" << "*" 
      <<setw(10)<< left << 654 << "*" << endl;
   cout << fixed << setprecision(4)
      << 123.4567890 << endl;
   // setiosflags (manipulator)   same as setf
   // resetiosflags (manipulator) same as unsetf
   return 0;
}