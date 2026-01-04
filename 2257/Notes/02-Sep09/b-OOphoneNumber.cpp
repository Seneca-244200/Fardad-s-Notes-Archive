#include <iostream>
using namespace std;
struct PhoneNumber {
   int m_area;
   int m_number;
   void dial() {
      cout << "Dialing (" << m_area << ") " << m_number << endl;
   }
   void set( int area, int number) {
      m_area = area;
      m_number = number;
   }
};




int main() {
   cout << "OO244 Sep09" << endl;
   PhoneNumber myNumber;
   myNumber.set( 416, 5551234);
   myNumber.dial();
   return 0;
}