
#include <iostream>
using namespace std;
int main() {
   cout << "OOP244NAA - Jun03" << endl;
   double dval;
   cout.setf(ios::fixed);
   cout.precision(3);
   cout << "Number: ";
   cin >> dval;
   if (cin.fail()) {
      cin.clear();
      cin.ignore(10000, '\n');// flush 10000 characters upto '\n'
      cerr << "Bad number try again!" << endl;
   }
   else {
      cout << "You entered: " << dval << endl;
   }
   cout << "Number: ";
   cin >> dval;
   cout << "You entered: " << dval << endl;
   cout << "Number: ";
   cin >> dval;
   cout << "You entered: " << dval << endl;


   return 0;
}