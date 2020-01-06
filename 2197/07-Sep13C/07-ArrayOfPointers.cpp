#include <iostream>
using namespace std;
struct Car {
   char m_licensePlate[9];
   char m_makeModel[128];
};
void display(const Car& C) {
   cout << C.m_makeModel << ", License plate" << C.m_licensePlate << endl;
}
int main() {
   Car A = { "ABC123", "Honda Civic" };
   Car B = { "XYZ352", "Cadilac XT5" };
   Car C = { "GVBX234", "Tesla Model 3" };
   Car* cars[3] = {&A, &B, &C};
   int i;
   for (i = 0; i < 3; i++) {
      display(*cars[i]);
   }
   return 0;
}