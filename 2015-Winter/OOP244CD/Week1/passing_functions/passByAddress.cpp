// Swapping values by address
 // swap1.cpp

 #include <iostream>
 using namespace std;
 void swap ( char *a, char *b );

 int main ( ) {
     char left;
     char right;

     cout << "left  is ";
     cin  >> left;
     cout << "right is ";
     cin  >> right;

     swap(&left, &right);

     cout << "After swap:"
            "\nleft  is " <<
            left <<
            "\nright is " <<
            right <<
            endl;
 }

 void swap ( char *a, char *b ) {
     char c;

     c = *a;
     *a = *b;
     *b = c;
 }
