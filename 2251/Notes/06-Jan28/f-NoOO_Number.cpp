#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Number {
   int m_value;

};
void init( Number& N ) {
   N.m_value = 0;
}
void addToNumber( Number& N, int value ) {
   N.m_value += value;
}
void display( const Number& N ) {
   cout << N.m_value << endl;
}
int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   Number num;
   init(num);
   addToNumber( num, 10 );
   display( num );

   return 0;
}