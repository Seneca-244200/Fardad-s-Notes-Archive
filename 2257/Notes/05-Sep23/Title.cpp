#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Title.h"
using namespace std;
namespace seneca {
   Title::Title(const char* content) {
      m_content = nullptr;
      set(content);
   }

   void Title::print() const {
      if (m_content[0]) {
         cout << m_content << endl;
      }
      else {
         cout << "Empty Title" << endl;
      }
   }

   void Title::set(const char* content) {
      if (content) {
         delete[] m_content;
         m_content = new char[strlen(content) + 1];
         strcpy(m_content, content);
      }
   }

   Title::~Title() {
      delete[] m_content;
   }
   
}