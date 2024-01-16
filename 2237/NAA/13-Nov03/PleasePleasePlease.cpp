#include <iostream>
using namespace std;
class Student {
   int m_stno{  };
   char* name{};
public:
   Student( int stno );
   Student& operator=( int stno );
   //YUUUUUUUUUUCK
   ostream& displayStudent( )const {

   }
   // do this instead
   ostream& display( )const {

   }
   int operator + (int mark)const;
   /*
   int a, b;
   Student C;
   a = C + b;
   
   */
   // oooooh
   void read( Student& S );


};

int operator + (Student S, int mark );
/*
int a, b;
Student C;
a = C + b;

*/


 ///                     DONT PLEASE! the isPass does not have an owner to be const or not
bool isPassed( Student S )const {

}
bool isPassed( const Student* S ) {

}
bool pass(Student& S ) {

}
//OK
const Student* readFile( ) {

}
//Not OK
const Student readFile( ) {

}

int main( ) {
   Student S = 1235; // calls line no 7;
   Student K(1235); // calls line no 7;
   Student L{ 1235 }; // calls line no 7;

   S = 234565; //calls line number 8

   return 0;
}