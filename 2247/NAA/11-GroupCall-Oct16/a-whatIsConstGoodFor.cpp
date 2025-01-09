#include <iostream>
using namespace std;

class Container {
   int m_data;
public:
   Container(int data = 100):m_data(data) {
   }
   int getValue()const  {  // is a query  returns internal information out without changting them
//      m_data = 88888;
      return m_data;
   }
   const int* getDataAddress() { // const pointers protect the target and make the target read only
      return &m_data;
   }



};


int main() {
   const double PI = 3.14156295;
   Container C;
   cout << C.getValue() << endl;
   

   return 0;
}
