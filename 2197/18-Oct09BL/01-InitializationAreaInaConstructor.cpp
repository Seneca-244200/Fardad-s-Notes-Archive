#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
class Thing {
   int m_value;
public:
   Thing(int value) {
      m_value = value;
   }
   Thing& operator= (int value){
      m_value = value;
      return *this;
   }
};



class Package {
   Thing T;
   int& m_data;
public:
   Package(int& data);
};
Package::Package(int& data) : m_data(data), T(data / 2) {
   // some logic here if needed
   T = Thing(data);
}

int main() {

  

   int i = 25;
   Package p = i;
   return 0;
}

//int main() {
//   int i = 0;
//   int j;
//   j = 0;
//   return 0;
//}