#include <iostream>
#include "Name.h"
#include "Utils.h"


using namespace std;
using namespace sdds;
// this class does not need rule of three
class CallableName : public Name {
   char m_title[20]{};
public:
   CallableName() = default;
   CallableName(const char* title, const char* name) :Name(name) {
      ut.strcpy(m_title, title, 19);
   };
   std::ostream& call(std::ostream& ostr = std::cout) {
      return ostr << "Calling " << m_title << " " << *this;
   }
};

void call(CallableName cn) {
   cn.call() << endl;
}

int main() {
   CallableName N("Mr.", "Fred"), M;
   N.call() << endl;
   cout << N << endl;
   M = N;
   M.call() << endl;
   cout << M << endl;
   call(N);
   return 0;
}