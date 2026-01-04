#pragma once
#ifndef SENECA_TITLE_H
#define SENECA_TITLE_H
namespace seneca {
   class Title {
      char* m_content;
   public:
      Title(const char* content="");
      void print()const;
      void set(const char* content);
      ~Title();
   };

}
#endif // !SENECA_TITLE_H


