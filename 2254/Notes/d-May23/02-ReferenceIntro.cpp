#include <iostream>
using namespace std;
struct Car {
   int m_noOfSeats;
   int m_noOfPassengers;
};

int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   Car C = { 4, 2 };
   int var = 10;

   int& R = var;
   Car& Cr = C;

   cout << "R's   address: " << (long long)&R << endl;
   cout << "var's address: " << (long long)&var << endl;

   cout << R << endl;
   cout << var << endl;

   cout << Cr.m_noOfPassengers << " / " << Cr.m_noOfSeats << endl;

   R = 100;
   cout << var << endl;

   return 0;
}