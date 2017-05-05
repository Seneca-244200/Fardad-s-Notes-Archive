#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Title.h"
using namespace std;
Title::Title(const char* name, const char* title) 
   :Name(name) {
   strcpy(m_title, title);
}
Title::Title(const Title& T) {
   strcpy(m_title, T.m_title);
   strcat(m_title, "!");
}
ostream& Title::display(ostream& os)const {
   return os << m_title << " " << (const char*)(*this);
}
std::ostream& operator<<(std::ostream&os, const Title& T) {
   return T.display(os);
}