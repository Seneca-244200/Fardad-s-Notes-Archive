#include <iostream>
#include "Title.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   Title::Title(const char* content, size_t maxChars) {
      if (content && content[0]) {// content exists and has data
         m_content = new char[strlen(content)+1];
         strcpy(m_content, content);
         m_disSize = maxChars;
      }
      else {
         m_content = nullptr;
         m_disSize = 0;
      }
   }
   Title::~Title() {
      delete[] m_content;
   }

   void Title::display() const {
      for (size_t i = 0; m_content[i] && i < m_disSize; i++) {
         //cout.put(m_content[i]);
         cout << m_content[i];
      }
   }

   bool Title::isValid() const {
      return bool(m_content);
   }

}