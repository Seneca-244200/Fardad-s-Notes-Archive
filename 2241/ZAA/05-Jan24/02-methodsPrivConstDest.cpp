//to Fardad: remove upto 1:16:59!

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
size_t counter{ };
class Name {
private:
   char* m_name;
   char* m_surname;
   /// <summary>
/// deallocates the memory used by Name object
/// </summary>
/// <param name="n"> The Name object</param>
   void deallocate( );
   /// <summary>
   /// sets the attributes of name to nullptr
   /// </summary>
   void setEmpty( );

public:
   Name( ); // constructs the object right after it is born
   ~Name( ); // destructs the object right before it is gone

   /// <summary>
/// sets the name and surname dynamically in the Name object
/// </summary>
/// <param name="name"> cstring fist name </param>
/// <param name="surname"> cstring last name </param>
   void set( const char* name, const char* surname );
   /// <summary>
/// set a name by getting them from console from user.
/// </summary>
   void read( );
   /// <summary>
/// returns true if the name is empty
/// </summary>
/// <returns> true if name is empty </returns>
   bool isEmpty( ) const;
   /// <summary>
/// Print a name or prints "No Name" if empty
/// </summary>
   void print( )const;
};



/// <summary>
/// no argument constructor 
/// </summary>
Name::Name( ) {
   cout << "Creating Name number " << ++counter << endl;
   setEmpty( );
}
/// <summary>
/// destructor
/// </summary>
Name::~Name( ) {
   cout << "Destroying Name number " << --counter << endl;
   print( );
   deallocate( );
}

/// <summary>
/// sets the name and surname dynamically in the Name object
/// </summary>
/// <param name="name"> cstring fist name </param>
/// <param name="surname"> cstring last name </param>
void Name::set( const char* name, const char* surname ) {
   deallocate( );
   if ( name && surname && name[0] && surname[0] ) {
      m_name = new char[strlen( name ) + 1];
      m_surname = new char[strlen( surname ) + 1];
      strcpy( m_name, name );
      strcpy( m_surname, surname );
   }
}
/// <summary>
/// deallocates the memory used by Name object
/// </summary>
/// <param name="n"> The Name object</param>
void Name::deallocate( ) {
   delete[] m_name;
   delete[] m_surname;
   m_name = m_surname = nullptr;
}
/// <summary>
/// set a name by getting them from console from user.
/// </summary>
void Name::read( ) {
   char* name = new char[64];
   char* surname = new char[128];
   cout << "Name: ";
   cin >> name;
   cout << "Surname: ";
   cin >> surname;
   set( name, surname );
   delete[] name;
   delete[] surname;
}
/// <summary>
/// returns true if the name is empty
/// </summary>
/// <returns> true if name is empty </returns>
bool Name::isEmpty( ) const {
   //m_name = new char[50]; not possible since the method is a constant one
   return m_name == nullptr || m_surname == nullptr;
}

/// <summary>
/// sets the attributes of name to nullptr
/// </summary>
void Name::setEmpty( ) {
   m_name = m_surname = nullptr;
}
/// <summary>
/// Print a name or prints "No Name" if empty
/// </summary>
void Name::print( )const {
   if ( !isEmpty( ) ) {
      cout << m_name << " " << m_surname << endl;
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

   n[0].print( );
   if ( n ) {
      size_t i{};
      for ( ; i < noOfNames; i++ ) {
         cout << (i + 1) << "> ";
         n[i].read();
      }
      for ( i = 0; i < noOfNames; i++ ) {
         cout << (i + 1) << ": ";
         n[noOfNames - i - 1].print( );
      }
   }
   else {
      cout << "Memory allocation failed!" << endl;
   }

   delete[] n;
   n = nullptr;// not needed, just to force a habit!
   return 0;
}


