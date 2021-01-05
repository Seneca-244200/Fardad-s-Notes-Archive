#pragma once
#include <iostream>
class Box {
   char defaulFill = '*';
   char m_label[51]{};
   int m_hieght = 5;
   int m_width;
   char& m_fill = defaulFill;
public:
   Box();
   Box(const char* label, char& fill);
   Box(const char* label, int hieght, int width,char& fill);
   std::ostream& display(std::ostream& os = std::cout)const;
   ~Box();
};

std::ostream& operator<<(std::ostream& os, const Box& B);
