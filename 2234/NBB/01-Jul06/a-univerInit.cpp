#include <iostream>
using namespace std;
class Student {
   char* m_name{};
   int m_stNo{};
   double m_gpa{};
public:
   Student( ) = default;
   Student( const char* name, int stNo ) {
     
   }
};
class OOP244 {
   Student S[40]{};

};
int main( ) {
   int i[100]{ 1,2 };
   Student ST{ "Fred", 1234 };
   cout << "Hello, I am Fardad!" << endl;
   return 0;
}