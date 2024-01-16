#include <iostream>
using namespace std;
class Number {
   int m_noOfPrints{ };
   double m_data{};
public:
   ostream& print( ostream& ostr = cout )const {
      int* counter = const_cast<int*>(&m_noOfPrints);
      (*counter)++;
      return ostr << m_data;
   }19-
};