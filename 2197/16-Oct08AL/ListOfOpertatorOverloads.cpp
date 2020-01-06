


TypeA A;
TypeB B;
TypeC C;

member operators
prefix unary operator

@A or A.operator@();
!A or A.operator!();
-A
+ A
~A
++A   A.operator++();
--A
how to implement:

Type TypeA::operator@(){
Type Whatever;
return whatever;
}

postfix Unary operators:

B++
A--

Type TypeB::operator++(int) {
   Type whatever;
   return whatever;
}
Type TypeA::operator--(int) {
   Type whatever;
   return whatever;
}

