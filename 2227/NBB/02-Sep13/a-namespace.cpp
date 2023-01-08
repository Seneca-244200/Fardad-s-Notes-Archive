#include <iostream>
using namespace std;
namespace hr {
   struct Student {
      double m_pay_rate;
      int m_hours;
   };
}

namespace edu {
   struct Student {
      double m_gpa;
      int m_semester;
      int m_hours;
   };
}
using namespace hr;
int main() {
   Student hst;
   edu::Student est;
   hst.m_hours;
   est.m_hours;
   cout << "Sep13, here we come!" << endl;
   return 0;
}