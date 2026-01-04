#include <iostream>
using namespace std;
int main( ) {
   char str[80];
 /*  cout << "Enter characters 'abc':\n> ";
   cin.ignore( );
   cin >> str;
   cin.ignore(1000,'\n' );
   cout << "You entered: *" << str << "*" << endl;
 /**********************
   cout << "Enter characters 'abc':\n> ";
   cin.ignore( 2 );
   cin >> str;
   cin.ignore( 1000, '\n' );
   cout << "You entered: *" << str << "*" << endl;*/
 /**********************
   cout << "Enter characters 'abcdef':\n> ";
   cin.ignore( 2, 'd' );
   cin >> str;
   cin.ignore( 1000, '\n' );
   cout << "You entered: *" << str << "*" << endl;
   /**********************
   cout << "Enter characters 'abcdef':\n> ";
   cin.ignore( 10, 'd' );
   cin >> str;
   cin.ignore( 1000, '\n' );
   cout << "You entered: *" << str << "*" << endl;
   /**********************/
   cout << "Enter characters 'abcdefghijklmn':\n> ";
   cin.ignore( '\n' ); // skips 10 characters since '\n' is has the code 10!
   cin >> str;
   cin.ignore( 1000, '\n' );
   cout << "You entered: *" << str << "*" << endl;
   /**********************/

   return 0;
}