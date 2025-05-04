#include <iostream>
using namespace std;
class Mark {
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
   double pi = 3.14159265;
   Mark M;
   int* ptr;
   //int p = (int)pi; C style
   int p = int(pi); // C++ says casing is temp object created out of another
   M = Mark(p);

   ptr = (int*)&pi; // should not be allowed, unless you know what you are doing.

   cout << *ptr << endl;





   return 0;
}