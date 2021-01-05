#pragma once
#include <iostream>


class Box {
   char m_label[51]{};
//   int m_hieght = 5;
   int m_hieght={ 5 };
   int m_width;
   char& m_fill;
public:
   Box(const char* label,char& fill);
//   Box(const char* label, int hieght, int width);
   std::ostream& display(std::ostream& os = std::cout)const;
   ~Box();
};