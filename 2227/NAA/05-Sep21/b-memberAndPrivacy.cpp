#include <iostream>
using namespace std;
struct Container {
private:
   int m_amount;
   int m_volume;
   char m_content[21];
public:
   bool isSafeEmpty();
   void init();
   void setAmount(int value);
   void display();
   void read();
};
bool Container::isSafeEmpty(){
   return m_volume == 0;
}
void Container::init(){
   m_content[0] = 0;
   m_volume = m_amount = 0;
}
void Container::setAmount(int value) {
   if (value > m_volume) {
      value = m_volume;
   }
   m_amount = value;
}
void Container::display() {
   if (!isSafeEmpty())
      cout << m_content << ", " << m_amount << " of " << m_volume << " liters";
   else
      cout << "This contianer is not set!" << endl;
}
void Container::read() {
   int amount{};
   do {
      if (cin.fail()) {
         cin.clear();
         cin.ignore(1000, '\n');
      }
      cout << "Content: ";
      cin.getline(m_content, 21);
      if (cin) cout << "Container volume: ";
      cin >> m_volume;
      if (cin) cout << m_content << " amount: ";
      cin >> amount;
      setAmount(amount);
      if (cin.fail()) cout << "Bad data " << endl;
   } while (cin.fail());
}
int main() {
   Container Cnt;
   Cnt.init();
  /* Cnt.read();
   Cnt.setAmount(50);*/
   Cnt.display();
   return 0;
}