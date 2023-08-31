#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Utils.h"
namespace sdds {
   bool debug = false;

   Animal::Animal(const char* theName) {
      name(theName);
      if(debug) cout << "Creating " << name() << " the Animal" << endl;
   }
   const char* Animal::name()const {
      return m_name;
   }
   void Animal::name(const char* value) {
      ut.strcpy(m_name, value, 40);
   }
   void Animal::act() {
      cout << name() << " Acts like animal" << endl;
   }
   void Animal::move() {
      cout << name() << " Moves like animal" << endl;
   }
   void Animal::sound() {
      cout << name() << " Sounds like animal" << endl;
   }
   Animal::~Animal() {
      if (debug) cout << "Removing " << name() << " the animal" << endl;
   }




  /* Animal::Animal( const Animal& A ) {
      if ( debug ) cout << "coping " << A.name( ) << " the Animal" << endl;
      operator=( A );
   }
   Animal& Animal::operator=( const Animal& A ) {
      if ( debug ) cout << "Setting " << name( ) << " to ";
      name( A.name( ) );
      if ( debug ) cout << name( ) << endl;
      return *this;
   }*/



}