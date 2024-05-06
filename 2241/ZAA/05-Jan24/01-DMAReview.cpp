//to Fardad: remove upto 1:16:59!

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Name {
   char* m_name;
   char* m_surname;
};
void foo( ) {
   int a{ };
   int b; 
   b = 20;



}
/// <summary>
/// sets the name and surname dynamically in the Name object
/// </summary>
/// <param name="n"> Name reference</param>
/// <param name="name"> cstring fist name </param>
/// <param name="surname"> cstring last name </param>
void set( Name& n, const char* name, const char* surname ) {
   if ( name && surname && name[0] && surname[0] ) {
      n.m_name = new char[strlen(name )+1];
      n.m_surname = new char[strlen(surname )+1];
      strcpy( n.m_name, name );
      strcpy( n.m_surname, surname );
   }
}

/// <summary>
/// deallocates the memory used by Name object
/// </summary>
/// <param name="n"> The Name object</param>
void deallocate( Name& n ) {
   delete[] n.m_name;
   delete[] n.m_surname;
   n.m_name = n.m_surname = nullptr;
}

/// <summary>
/// set a name by getting them from console from user.
/// </summary>
/// <param name="N"> name object</param>
void read( Name& N ) {
   char* name= new char[64];
   char* surname = new char[128];
   cout << "Name: ";
   cin >> name;
   cout << "Surname: ";
   cin >> surname;
   set( N, name, surname );
   delete[] name;
   delete[] surname;
}

/// <summary>
/// returns true if the name is empty
/// </summary>
/// <param name="N"> Name object</param>
/// <returns> true if name is empty </returns>
bool isEmpty( const Name& N ) {
   return N.m_name == nullptr || N.m_surname == nullptr;
}


void setEmpty( Name& n ) {
   n.m_name = n.m_surname = nullptr;
}

/// <summary>
/// Print a name or prints "No Name" if empty
/// </summary>
/// <param name="N"> Name Object</param>
void print( const Name& N ) {
   if ( !isEmpty( N ) ) {
      cout << N.m_name << " " << N.m_surname << endl;
   }
   else {
      cout << "No Name!" << endl;
   }
}


int main( ) {
   cout << "Welcome to OOP244ZAA 05-Jan 24th." << endl;
   Name* n = nullptr;
   size_t noOfNames{};
   cout << "Please enter then number of names:\n> ";
   cin >> noOfNames;
   n = new Name[noOfNames];
   for ( size_t i = 0; i < noOfNames; i++) {
      setEmpty( n[i] );
   }

   print( n[0] );
   if ( n ) {
      size_t i{};
      for ( ; i < noOfNames; i++ ) {
         cout << (i + 1) << "> ";
         read(n[i]);
      }
      for ( i = 0; i < noOfNames; i++ ) {
         cout << (i + 1) << ": ";
         print( n[noOfNames - i - 1] );
      }
   }
   else {
      cout << "Memory allocation failed!" << endl;
   }
   for ( size_t i = 0; i < noOfNames; i++ ) {
      deallocate( n[i] );
   }
   delete[] n;
   n = nullptr;// not needed, just to force a habit!
   return 0;
}


