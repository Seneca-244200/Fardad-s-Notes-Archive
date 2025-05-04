#include <iostream>
#include "bubbleSort.h"
#include "prnCsv.h"
#include "Container.h"
using namespace std;
using namespace seneca;



class Mark{
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark((m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data);
   }
   bool operator > (const Mark& other) {
      return m_data > other.m_data;
   }
   bool operator < (const Mark& other) {
      return m_data < other.m_data;
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& ostr, const Mark& M) {
   return M.display(ostr);
}

int main() {



   Mark M[5] = {100,20, 55, 77, 60};
   Container C[4] = { 400, 200, 300, 100 };
   prnCsv(C, 4);
   bubbleSort(C, 4);
   prnCsv(C, 4);
   bubbleSort(C, 4, false);
   prnCsv(C, 4);
   cout << "-------------------" << endl;
   prnCsv(M, 5);
   bubbleSort(M, 5);
   prnCsv(M, 5);
   bubbleSort(M, 5, false);
   prnCsv(M, 5);
   return 0;
}