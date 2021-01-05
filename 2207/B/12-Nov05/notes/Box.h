#pragma once
#include <iostream>
class Box {
   char m_label[51]{};
   int m_height = 5;
   int m_width = 5;
public:
   Box();
   Box(const char* label);
   Box(const char* label, int hieght, int width);
   std::ostream& display(std::ostream& os = std::cout)const;
   ~Box();
};

std::ostream& operator<<(std::ostream& os, const Box& B);