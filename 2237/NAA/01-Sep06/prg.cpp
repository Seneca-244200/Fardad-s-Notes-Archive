#include <cstdio>
using namespace std;
struct Student {
//private:
   char name[41];
   int id;
//public:
   void display( int n ) {
      if ( n == 2 ) {
         printf( "%d\n", id );
      }
      else if(n == 1){
         printf( "%s\n", name);
      }
      else {
         printf( "Bad argument\n" );
      }
   }
   void display() {
      printf( "%-40s %d\n", name, id );
   }
};



int main( ) {
   Student S = { "Lisa Simpson", 124 };
   //S.id = 234;
   S.display( );
   S.display( 1 );
   S.display( 2 );
   return 0;
}