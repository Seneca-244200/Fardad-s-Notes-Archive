#include <iostream>
class Num {
   int m_value;
public:
   Num(int value = 0);
   std::ostream& display(std::ostream& coutRef = std::cout)const;
};