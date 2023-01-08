#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   class Container {
   private: // optional, since classes are private by default but good to have
      double m_amount;
      double m_volume;
      char* m_conent;
   public:
      void init();
      void clearup();
      ostream& display(int row = 0)const;
      void read();
   };
   void Container::init(){
      m_conent = nullptr;
      m_amount = 0;
      m_volume = 0;
   }
   void Container::clearup(){
      delete[] m_conent;
   }
   ostream& Container::display(int row)const {
      if (row > 0) cout << row << ": ";
      cout << m_amount << " liters of " << m_conent << " in container of " << m_volume << " liters!";
      return cout;
   }
   void Container::read() {
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
      if (amount > volume) amount = volume;
      if (cin.fail()) { // not sure if the error message should be here...
         if(!errorPrinted) cout << "Bad Amount entry!" << endl;;
      }
      else {
         m_conent = new char[strlen(content) + 1];
         strcpy(m_conent, content);
         m_volume = volume;
         m_amount = amount;
         cin.ignore(10000, '\n'); // flushes the keyboard
      }
   }
}
using namespace sdds;
int main() {
   Container cnt;
   cnt.init();
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
   cnt.clearup();
   return 0;
}