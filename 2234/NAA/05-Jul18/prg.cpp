#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Student;


class Name {
   char* first;
   char* last;
   Name( const char* f, const char* l ) {
      first = new char[strlen( f ) + 1];
      last = new char[strlen( l ) + 1];
      strcpy( first, f );
      strcpy( last, l );
   }
   friend class Student;
};
class Student {
   Name m_name;


public:
   Student( const char* first, const char* last ) :m_name{first, last } {

   }

};

void foo( int arr[] ) {
   cout << sizeof( arr ) << endl;
}

int main( ) {
   int a[50];
   int* p = new int[1000];

   cout << sizeof( a ) << endl;

   foo( a );

   cout << sizeof( p ) << endl;

}
int deletingArrayOfPointers( ) {
   int* nums[20]{};
   nums[0] = new int[20];
   nums[1] = new int[10];
   nums[2] = new int[200];
   nums[3] = new int[120];
   nums[4] = new int[220];
   nums[5] = new int[230];
   nums[6] = new int[520];
   for ( int i = 0; i < 20; i++ ) {
      delete[] nums[i];
   }

   cout << "Interfaces and etc...." << endl;
   return 0;
}