#include <iostream>
using namespace std;

class Container {
private: // optional, since classes are private by default but good to have
   double m_amount;
   double m_volume;
   char m_conent[240];
public:
   void display()const;
   void read();
};
void Container::display()const{
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
void ContainerRow(int row, const Container& C) { // ok for Continer& to be const, since display is const
   cout << row << ": ";
   C.display();
   cout << endl;
}
int main() {
   Container cnt[3]{};
   int i;
   for (i = 0; i < 3; i++) {
      cout << (i + 1) << "/3: ";
      cnt[i].read();
   }
   for (i = 0; i < 3; i++) {
      ContainerRow(i + 1, cnt[i]);
   }
   return 0;
}