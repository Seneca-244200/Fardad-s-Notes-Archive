#include <cstdio>
using namespace std;
struct Student {
   char name[41];
   int id;
};

void prnStudent( const Student* sptr ) {
   printf( "%-40s %d\n", sptr->name, sptr->id );
}

int main( ) {
   Student S = { "Lisa Simpson", 124 };
   prnStudent( &S );
   return 0;
}