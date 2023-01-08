#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   struct Container {
   private:
      int m_amount;
      int m_volume;
      char* m_content;
      void init();
      void clearup();
   public:
      Container();
      ~Container();
      void set(const char* content, int amount, int volume = 220);
      bool isSafeEmpty()const;
  
      void setAmount(int value);
      ostream& display()const;
      void read();
   };
   Container::Container(){
      init();
   }
   Container::~Container(){
      clearup();
   }
   void Container::set(const char* content, int amount, int volume){
      delete[] m_content;
      m_content = new char[strlen(content) + 1];
      strcpy(m_content, content);
      if (amount > volume) amount = volume;
      m_amount = amount;
      m_volume = volume;
   }
   bool Container::isSafeEmpty() const{ // Query
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
   ostream& Container::display()const {
      if (!isSafeEmpty())
         cout << m_content << ", " << m_amount << " of " << m_volume << " liters";
      else
         cout << "This contianer is not set!" << endl;
      return cout;
   }
   void Container::read() {
      char content[256];
      int amount{};
      int volume{};
      do {
         if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
         }
         cout << "Content: ";
         cin.getline(content, 256);
         if (cin) {
            cout << "Container volume: ";
         }
         cin >> volume;
         if (cin) cout << content << " amount: ";
         cin >> amount;
         if (cin.fail())
            cout << "Bad data " << endl;
         else {
            set(content, amount, volume);
         }
      } while (cin.fail());
   }
}
using namespace sdds;
void DisplayContainerWithARow(int row, const Container& C) {
   cout << row << ": ";
   C.display() << endl;
}


int main() {
   Container Cnt;
   Cnt.read();
   Cnt.display();
   return 0;
}