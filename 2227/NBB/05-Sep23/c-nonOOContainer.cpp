#include <iostream>
using namespace std;
struct Container {
   double m_amount;
   double m_volume;
   char m_conent[240];
};
void display(const Container& C) {
   cout << C.m_amount << " liters of " << C.m_conent << " in container of " << C.m_volume << " liters!";
   C.m_amount = 24;
}
void read(Container& C) {
   cout << "Conainer entry..." << endl;
   cout << "Content: ";
   cin >> C.m_conent;
   cout << "Volume: ";
   cin >> C.m_volume;
   cout << "Amount: ";
   cin >> C.m_amount;
}
int main() {
   Container cnt{};
   read(cnt);
   display(cnt);
   return 0;
}