#include <iostream>
#include "Container.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   Container::Container() {
      init();
   }
   Container::Container(const char* content) {
      init(content);
   }
   Container::Container(const char* content,
      double amount, double volume) 
      :m_amount(amount>volume?volume:amount), m_volume{volume} {
      init(content);
   }
   Container::~Container() {
      cleanUp();
   }
   void Container::init() {
      m_content = nullptr;
      m_amount = 0;
      m_volume = 0;
   }
   void Container::init(const char* m_content) {
      init();
      if(m_content && m_content[0]) { // content is not nullptr
         // and has some cstring in it
         this->m_content = new char[strlen(m_content) + 1];
         strcpy(this->m_content, m_content);
      }
   }
   void Container::cleanUp() {
      delete[] m_content;
   }
   ostream& Container::display(int row)const {
      if(row > 0) cout << row << ": ";
      cout << m_amount << " liters of " << m_content << " in container of " << m_volume << " liters!";
      return cout;
   }
   // this is not tested, and it is messy,
   // cleanup the code and it efficiant
   Container& Container::read() {
      char content[256]{};
      double amount, volume;
      bool errorPrinted = false;
      cleanUp();
      init();
      cout << "Conainer entry..." << endl;
      cout << "Content: ";
      cin.getline(content, 256);// reads up to newline
      if(cin)
         cout << "Volume: "; // cin is polymorphic so if it is checked as a condition, automatically it returns the success
      else {
         cout << "Content too long!" << endl;
         errorPrinted = true;
      }
      cin >> volume;
      cin.ignore(10000, '\n');
      if (!cin.fail()) {
         cout << "Amount: ";
      }
      else
         if(!errorPrinted) {
            cout << "Bad Volume entry!" << endl;
            errorPrinted = true;
         }
      cin >> amount;
      cin.ignore(10000, '\n');
      if(amount > volume) amount = volume;
      if(cin.fail()) { // not sure if the error message should be here...
         if(!errorPrinted) cout << "Bad Amount entry!" << endl;;
      } else {
         m_content = new char[strlen(content) + 1];
         strcpy(m_content, content);
         m_volume = volume;
         m_amount = amount;
      }
      if (cin.fail()) {
         cin.clear();
         cin.ignore(10000, '\n');
      }
      return *this;
   }
}