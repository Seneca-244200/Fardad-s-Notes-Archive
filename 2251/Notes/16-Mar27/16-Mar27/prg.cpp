#include <iostream>

using namespace std;
class Mark {
   int m_data;
   size_t m_noOfPrints{};
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
   size_t noOfPrintouts()const {
      return m_noOfPrints;
   }
   ostream& display(ostream& os)const {
      size_t* cntPtr = const_cast<size_t*>(&m_noOfPrints);
      (*cntPtr)++;
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& ostr, const Mark& M) {
   return M.display(ostr);
}

int main() {
   double pi = 3.14159265;
   Mark M{ 100 };
   char* ptr;
   int p;
   unsigned long long address{};
   // int p = int(pi);  
   p = static_cast<int>(pi); // is for reletive types

   //ptr = static_cast<char*>(&pi);
   ptr = reinterpret_cast<char*>(&pi);

   address = reinterpret_cast<unsigned long long>(&pi);

   cout << address << endl;
   
   
   for (int i = 0; i < 10; i++) {
      cout << M << " ";
   }
   cout << endl;
   cout << "Printed " << M.noOfPrintouts() << " times" << endl;

   return 0;
}