#include <iostream>
using namespace std;
//struct Container {
//private:
//   double m_amount;
//   double m_volume;
//   char m_conent[240];
//public:
//   void display();
//   void read();
//};
class Container {
private: // optional, since classes are private by default but good to have
   double m_amount;
   double m_volume;
   char m_conent[240];
public:
   void display()const;
   void read();
};
void Container::display() const{
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
   //cnt.m_amount = 10000000; error since m_amount is private
   cnt.display();
   return 0;
}