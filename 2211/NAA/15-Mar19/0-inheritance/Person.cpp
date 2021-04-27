#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;
Person::Person(const char* name) {
   m_name = new char[strlen(name) + 1];
   strcpy(m_name, name);
}

ostream& Person::introduce(ostream& ostr) const {
   return ostr << "Hi, my name is " << m_name;
}

Person::~Person() {
   delete[] m_name;
}
