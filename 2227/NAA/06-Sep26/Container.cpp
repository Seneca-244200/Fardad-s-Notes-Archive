#include <iostream>
#include "Container.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   Container::Container() {
      //init();
   }
   Container::Container(const char* content) {
      //init();
      set(content, 220, 220);
   }

   Container::Container(const char* content, 
                        int amount, int volume) {
      //init();
      set(content, amount, volume);
   }

   Container::~Container() {
      clearup();
   }
   Container& Container::set(const char* content, 
                       int amount, int volume) {
      delete[] m_content;
      m_content = new char[strlen(content) + 1];
      strcpy(m_content, content);
      if(amount > volume) amount = volume;
      m_amount = amount;
      m_volume = volume;
      return *this;
   }
   Container& Container::clearup() {
      delete[] m_content;
      m_content = nullptr;
      return *this;
   }
   bool Container::isSafeEmpty() const { // Query
      return m_content == nullptr;
   }
   /*void Container::init() {
      m_content = nullptr;
      m_volume = m_amount = 0;
   }*/

   Container& Container::setAmount(int value) {
      if(value > m_volume) {
         value = m_volume;
      }
      m_amount = value;
      return *this;
   }
   ostream& Container::display()const {
      if(!isSafeEmpty())
         cout << m_content << ", " << m_amount << " of " << m_volume << " liters";
      else
         cout << "This contianer is not set!" << endl;
      return cout;
   }
   Container& Container::read() {
      char content[256];
      int amount{};
      int volume{};
      do {
         if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
         }
         cout << "Content: ";
         cin.getline(content, 256);
         if(cin) {
            cout << "Container volume: ";
         }
         cin >> volume;
         if(cin) cout << content << " amount: ";
         cin >> amount;
         if(cin.fail())
            cout << "Bad data " << endl;
         else {
            set(content, amount, volume);
         }
      } while(cin.fail());
      cin.ignore(1000, '\n');
      return *this;
   }
}
