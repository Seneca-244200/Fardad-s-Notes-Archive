// incomplete, we'll talk about it in the lab
#include <iostream>
using namespace std;
namespace sdds {
   const int legalAge = 19;
   struct Customer {
      char m_name[81];
      int m_age;
      void setName( ) {
         cout << "> ";
         cin >> m_name;
      }
      void setAge( ) {
         cout << "> ";
         cin >> m_age;
      }
      const char* getName( ) {
         return m_name;
      }
      bool legal( ) {
         bool res = false;
         if ( m_age >= legalAge ) {
            res = true;
         }
         return res;
      }
   };
}
int main( ) {
   cout << "Hello OOP244ZAA Bar!" << endl;
   char name[81];
   unsigned int age;
   cout << "May I have your name?" << endl << "> ";
   cin >> name;
   cout << "Hello again " << name << ", how old are you?" << endl << "> ";
   cin >> age;
   if ( age >= 19 ) {
      cout << "Welcome, how may I serve you?..." << endl;
   }
   else {
      cout << name << " get out of here and come back when you grow up..." << endl;
   }

   return 0;
}
