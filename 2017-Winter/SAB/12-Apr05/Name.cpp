#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Name.h"
using namespace std;
Name::Name(const char* name) {
   m_data = new char[strlen(name) + 1];
   strcpy(m_data, name);
}
Name::Name(const Name& N) {
   m_data = new char[strlen(N.m_data) + 1];
   strcpy(m_data, N.m_data);
}
Name::~Name() {
   delete[] m_data;
}
Name::operator const char*()const {
   return m_data;
}
ostream& operator<<(ostream& os, const Name& N) {
   return os << (const char*)N;
}
