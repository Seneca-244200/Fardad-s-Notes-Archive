/*
TypeA  A;
TypeB  B;
TypeC  C;

A = B @ C;

TypeA TypeB::operator(TypeC rhs);
// if you have to
TypeA operator(TypeB lhs, TypeC rhs);

A = @B; // prefix
TypeA TypeB::operator();

A = B@ // post fixt (++ and --);
TypeA TypeB::operator(int);

// if you have to
TypeA operator(TypeB oper);
TypeA operator(TypeB oper, int);



*/

#include <iostream>
#include <fstream>
#include "Str.h"
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Homer";
   Str fname;

   fname = name += " Simpson";
//  fname.operator=( name.operator+=( "Simpson" ) );


   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type:
*
*/