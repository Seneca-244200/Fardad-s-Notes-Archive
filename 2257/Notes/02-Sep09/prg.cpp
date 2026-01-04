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
   void set(int number) {
      m_area = 416;
      m_number = number;
   }
};




int main() {
   cout << "OO244 Sep09" << endl;
   PhoneNumber nums[4] {
      {467, 5551224},
      {647, 5551565}
   };
   nums[2].set(647, 2342345);
   nums[3].set(2344345);

   for (int i = 0; i < 4; i++) {
      nums[i].dial();
   }
   return 0;
}
