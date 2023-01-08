#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   struct Container {
   private:
      int m_amount;
      int m_volume;
      char* m_content;
   public:
      bool isSafeEmpty();
      void init();
      void clearup();
      void setAmount(int value);
      void display();
      void read();
   };
   bool Container::isSafeEmpty() {
      return m_content == nullptr;
   }
   void Container::init() {
      m_content = nullptr;
      m_volume = m_amount = 0;
   }
   void Container::clearup() {
      delete[] m_content;
      m_content = nullptr;
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
      char content[256];
      int amount{};
      do {
         delete[] m_content;
         m_content = nullptr;
         if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
         }
         cout << "Content: ";
         cin.getline(content, 256);
         if (cin) {
            m_content = new char[strlen(content) + 1];
            strcpy(m_content, content);
            cout << "Container volume: ";
         }
         cin >> m_volume;
         if (cin) cout << m_content << " amount: ";
         cin >> amount;
         setAmount(amount);
         if (cin.fail()) cout << "Bad data " << endl;
      } while (cin.fail());
   }
}
using namespace sdds;
int main() {
   Container Cnt;
   Cnt.init();
  /* Cnt.read();
   Cnt.setAmount(50);*/
   Cnt.display();
   Cnt.clearup();
   return 0;
}