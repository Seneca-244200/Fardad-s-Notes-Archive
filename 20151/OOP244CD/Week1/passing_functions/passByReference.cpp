// Swapping values by reference
 // swap2.cpp

 #include <iostream>
 using namespace std;
 void swap ( char &a, char &b );

 int main ( ) {
     char left;
     char right;

     cout << "left  is ";
     cin  >> left;
     cout << "right is ";
     cin  >> right;

     swap(left, right);

    cout << "After swap:\n left  is " << left << "\n right is " << right << endl;
 }

 void swap ( char &a, char &b ) {
     char c;

     c = a;
     a = b;
     b = c;
 }
