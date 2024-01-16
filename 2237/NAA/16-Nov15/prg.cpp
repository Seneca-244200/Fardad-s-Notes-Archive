#include <iostream>
#include "Fullname.h"
#include "Utils.h"


using namespace std;
using namespace sdds;
// if the most derived class does not need rule of three, don't do it!!!!!
// as practice, make m_title DMA and then create the rule of three.....
class TitledName : public Fullname {
   char m_title[20]{};
public:
   TitledName() = default;
   TitledName(const char* title, const char* name, const char* surname) :Fullname(name, surname) {
      ut.strcpy(m_title, title, 19);
   };
   std::ostream& call(std::ostream& ostr = std::cout) {
      return ostr << "Calling " << m_title << " " << *this;
   }
};


void call(TitledName cn) {
   cn.call() << endl;
}

int main() {
   TitledName N("Mr.", "Fred", "Flinston"), M;
   N.call() << endl;
   cout << N << endl;
   M = N;
   M.call() << endl;
   cout << M << endl;
   call(N);
   return 0;
}