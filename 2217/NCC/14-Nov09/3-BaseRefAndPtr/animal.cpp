#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Animal.h"

namespace sdds {
   bool debug = false;
   Animal::Animal(const char* thename) {
      name(thename);
      if(debug) cout << "Creating " << name() << " the Animal" << endl;
   }
   const char* Animal::name()const {
      return m_name;
   }
   void Animal::name(const char* value) {
      strncpy(m_name, value, 40);
      m_name[40] = char(0);
   }
   void Animal::act() {
      cout << "Act like " << name() << " the animal" << endl;
   }
   void Animal::move() {
      cout << "Move like " << name() << " the  animal" << endl;
   }
   void Animal::sound() {
      cout << "Sound like " << name() << " the  animal" << endl;
   }
   Animal::~Animal() {
      if(debug) cout << "Removing " << m_name << " the animal" << endl;
   }
}