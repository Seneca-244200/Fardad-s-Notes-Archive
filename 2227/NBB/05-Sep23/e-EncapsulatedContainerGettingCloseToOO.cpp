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
   Container cnt[3]{};
   int i;
   for (i = 0; i < 3; i++) {
      cout << (i + 1) << "/3: ";
      cnt[i].read();
   }
   for (i = 0; i < 3; i++) {
      cout << (i + 1) << ": ";
      cnt[i].display();
      cout << endl;
   }
   return 0;
}