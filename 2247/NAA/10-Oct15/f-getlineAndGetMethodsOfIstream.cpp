#include <iostream>
using namespace std;


int main( ) {
   char name[81];
   char ch;
   cout << "What is your name\n> ";
   cin.getline( name , 81 , ',' ); // stops at the delim and extracts it and will
                            // fail if it reaches the character count
   //cin.get( name, 81 , ',' );  // stops at the delim and will not extract it
   //                     will not fail if it reaches 81
   ch = cin.get( );   // reads one char and returns it
   cout << "Hello (" << name << ") welcome to oop244naa!" << endl;
   cout << "And the char after is " << ch << endl;
   cin.get(ch );   // reads one char and returns *this
   cout << "And the next is " << ch << endl; 
   return 0;
}