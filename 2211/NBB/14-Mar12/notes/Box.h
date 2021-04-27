#pragma once
#include <iostream>

namespace sdds {
   class Label {
      char m_label[51]{};
   public:
      Label(const char* value);
      operator const char* ()const;
      operator char* ();
   };
   class Box {
      Label m_label{ "" };
      char m_fill{ '*' };
      int m_hieght = 10;
      int m_width = 5;
   public:
      Box();
      Box(const char* label, char fill);
      Box(const char* label, int hieght, int width, char fill);
      std::ostream& display(std::ostream& os = std::cout)const;
      ~Box();
   };
   std::ostream& operator<<(std::ostream& os, const Box& B);

}