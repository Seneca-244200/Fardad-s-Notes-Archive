#include <iostream>
using namespace std;

class Container {
private: // optional, since classes are private by default but good to have
   double m_amount;
   double m_volume;
   char m_conent[16];
public:
   ostream& display(int row = 0)const;
   void read();
};
ostream& Container::display(int row)const{
   if (row > 0) cout << row << ": ";
   cout << m_amount << " liters of " << m_conent << " in container of " << m_volume << " liters!";
   return cout;
}
void Container::read() {
   cout << "Conainer entry..." << endl;
   cout << "Content: ";
   cin.getline(m_conent,16);
   if(!cin.fail()) cout << "Volume: ";
   cin >> m_volume;
   if (!cin.fail()) cout << "Amount: ";
   cin >> m_amount;
   if (m_amount > m_volume) m_amount = m_volume;
   if (cin.fail()) { // not sure if the error message should be here...
      cout << "Invalid Container information!" << endl;
   }
}

int main() {
   Container cnt;
   bool done;
   do {
      done = true;
      cnt.read();
      if (cin.fail()) {
         cin.clear(); // say sorry to cin
         cin.ignore(10000, '\n');
         done = false;
      }
   } while (!done);
   cnt.display() << endl;
   return 0;
}