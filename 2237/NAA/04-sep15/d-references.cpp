#include <iostream>
using namespace std;

void getNum( int& val ) {
   cout << "Enter a number: ";
   cin >> val;
}

void getNum( int* val ) {
   cout << "Enter a number: ";
   cin >> *val;
}

int main( ) {
   int number{};
   getNum( number ); // getNum(int& val = number);
   cout << "you entered: " << number << endl;
   getNum( &number ); // getNum(int* val = &number);
   cout << "you entered: " << number << endl;
   return 0;
}