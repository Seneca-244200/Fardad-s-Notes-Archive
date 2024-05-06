#include <iostream>
#include "Utils.h" 
template <typename type>
struct Possession {
   char name[128];
   type m_possession;
};
class Laptop {
   char m_model[256];
public:
   Laptop( const char* model="Asus" );
   //....
};

int main( ) {
   Possession<Laptop> mylaptop;
   Possession<int> myNumber;
   return 0;
}