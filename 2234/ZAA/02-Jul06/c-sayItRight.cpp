#include <iostream>
using namespace std;
class Student {
   char* m_name{};
   int m_stno{};
   double m_gpa{};
public:
   Student( ) = default;
   Student( const char* name, int stno );
   Student( int stno );
};
int main( ) {
   Student* p;
   Student A;
   // p is set to the address of a new student
   p = new Student;
   // target of pointer p is set to A
   *p = A;
   // p is sett o address of A
   p = &A;


// e is set to m multiplied by target of c multiplied by target of c

 //  e = m * *c * *c;


   return 0;
}