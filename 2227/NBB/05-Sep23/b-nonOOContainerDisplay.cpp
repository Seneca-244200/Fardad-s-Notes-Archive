#include <iostream>
using namespace std;
struct Container {
   double m_amount;
   double m_volume;
   char m_conent[240];
};
void display(const Container& C) {
   cout << C.m_amount << " liters of " << C.m_conent << " in container of " << C.m_volume << " liters!";
}

int main() {
   Container cnt{ 25.5, 100, "Water" };
   display(cnt);
   return 0;
}