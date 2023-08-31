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


void foo( int a ) {
   whatever;
}

int getInt( ) {
   int val{};
   cin >> val;
   return val;
}

int main( ) {
   Student S{};
   Student st{ "Fred", 1234 };
   Student A[100]{ 1234, 5555 };
   int a[300]{ 1,2 };
   int c[4000]{};

   int b = 10;

   foo( b ); // foo(int a = b);

   b = getInt( );
   return 0;
}