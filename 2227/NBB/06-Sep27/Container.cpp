#include <iostream>
#include "Container.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   Container::Container() {
      init();
   }
   Container::Container(const char* content) {
      ////Container(); can not call a constructor!!!
      //init(); // this is the right way.
      //if(content && content[0]) { // content is not nullptr
      //                            // and has some cstring in it
      //   m_content = new char[strlen(content) + 1];
      //   strcpy(m_content, content);
      //   m_amount = 2.5;
      //   m_volume = 2.5;
      //}
      init(content, 2.5, 2.5);
   }
   Container::Container(const char* content, double amount, double volume) {
      init(content, amount, volume);
   }
   Container::~Container() {
      cleanUp();
   }
   void Container::init() {
      m_content = nullptr;
      m_amount = 0;
      m_volume = 0;
   }
   // m_content argumnet will shadow the m_content attribute, rendring it inaccessble
   // very bad style for programming, but you can resolve the confilict of name
   // using the address of the current object that is "this"
   void Container::init(const char* m_content, double amount, double volume) {
      init();
      if(m_content && m_content[0]) { // content is not nullptr
         // and has some cstring in it
         this->m_content = new char[strlen(m_content) + 1];
         strcpy(this->m_content, m_content);
         m_amount = amount;
         m_volume = volume;
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
   Container& Container::read() {
      char content[256]{};
      double amount, volume;
      bool errorPrinted = false;
      cout << "Conainer entry..." << endl;
      cout << "Content: ";
      cin.getline(content, 256);// reads up to newline
      //if (!cin.fail()) cout << "Volume: ";
      if(cin)
         cout << "Volume: "; // cin is polymorphic so if it is checked as a condition, automatically it returns the success
      else {
         cout << "Content too long!" << endl;
         errorPrinted = true;
      }
      cin >> volume;
      if(!cin.fail())
         cout << "Amount: ";
      else
         if(!errorPrinted) {
            cout << "Bad Volume entry!" << endl;
            errorPrinted = true;
         }
      cin >> amount;
      if(amount > volume) amount = volume;
      if(cin.fail()) { // not sure if the error message should be here...
         if(!errorPrinted) cout << "Bad Amount entry!" << endl;;
      } else {
         m_content = new char[strlen(content) + 1];
         strcpy(m_content, content);
         m_volume = volume;
         m_amount = amount;
         cin.ignore(10000, '\n'); // flushes the keyboard
      }
      return *this;
   }
}