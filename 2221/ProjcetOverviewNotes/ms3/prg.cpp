#include <iostream>
using namespace std;
class Foo{
   int m_atr{}; // set to zero
   char* m_val{};// set nullptr
public:
   //Foo() :m_atr{ 0 } {
   //   
   //}
   // ways to create an empty default constructor
   //1 -Foo() {}  
   //2 -Foo() = default;
};

int main() {

   return 0;
}