#include <iostream>
using namespace std;
struct Container {
   int m_amount;
   int m_volume;
   char m_content[256];
};
void display(const Container& C) {
   cout << C.m_content << ", " << C.m_amount << " of " << C.m_volume << " liters";
}
void read(Container& C) {
   cout << "Content: ";
   cin >> C.m_content;
   cout << "Container volume: ";
   cin >> C.m_volume;
   cout << C.m_content << " amount: ";
   cin >> C.m_amount;
}
int main() {
   Container Cnt;
   read(Cnt);
   display(Cnt);
   return 0;
}