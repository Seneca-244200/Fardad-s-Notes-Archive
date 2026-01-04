#pragma once
#ifndef SENECA_TITLE_H
#define SENECA_TITLE_H
namespace seneca {
   class Title {
      char* m_content;
      size_t m_disSize;
   public:
      Title(const char* content, size_t maxCharsToDisplay = 40);
      ~Title();
      void display()const;
      bool isValid()const;
   };
}
#endif // !SENECA_TITLE_H

