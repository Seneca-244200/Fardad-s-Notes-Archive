#include <iostream>
using namespace std;
struct Container {
   double m_amount;
   double m_volume;
   char m_conent[240];
   void display();
   void read();
};
void Container::display() {
   cout << m_amount << " liters of " << m_conent << " in container of " << m_volume << " liters!";
}
void Container::read() {
   cout << "Conainer entry..." << endl;
   cout << "Content: ";
   cin >> m_conent;
   cout << "Volume: ";
   cin >> m_volume;
   cout << "Amount: ";
   cin >> m_amount;
}
int main() {
   Container cnt{};
   cnt.read();
   cnt.display();
   return 0;
}