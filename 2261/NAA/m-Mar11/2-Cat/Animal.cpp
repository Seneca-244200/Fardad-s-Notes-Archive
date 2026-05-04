#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Utils.h"
namespace seneca {
   Animal::Animal( ) {
      name( "No Name" );
      if(debug ) cout << "Defaulting to an animal with no name!" << endl;
   }
   Animal::Animal( const char* theName ) {
      name( theName );
      if ( debug ) cout << "Creating " << name( ) << " the Animal" << endl;
   }
   const char* Animal::name( )const {
      return m_name;
   }
   void Animal::name( const char* value ) {
      if ( debug ) cout << "overwritting the " << (m_name[0] ? m_name : "empty name") << " with " << value << endl;
      ut.strcpy( m_name, value, 40 );
   }
   void Animal::act( ) {
      cout << "Act like animal" << endl;
   }
   void Animal::move( ) {
      cout << "Move like animal" << endl;
   }
   void Animal::sound( ) {
      cout << "Sound like animal" << endl;
   }
   Animal::~Animal( ) {
      if ( debug ) cout << "Removing " << m_name << " the animal" << endl;
   }
}