#include <iostream>
using namespace std;

class MyClass {
public:
   // Member function template
   template <typename T>
   void printValue( T value ) {
      cout << "Value: " << value << endl;
   }
};

int main( ) {
   MyClass obj;

   // Calling the member function template with different types
   obj.printValue( 42 );          // int
   obj.printValue( 3.14 );        // double
   obj.printValue( "Hello!" );    // const char*

   return 0;
}
