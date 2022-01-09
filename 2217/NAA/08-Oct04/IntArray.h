
#ifndef SDDS_INTARRAY
#define SDDS_INTARRAY
#include <iostream>
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
      void resize(int newsize);
   public:
      IntArray(int size=1);
      IntArray(const IntArray& cp);
      const int& operator[](int index)const;
      int& operator[](int index);
      ~IntArray();
      int size()const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr, const IntArray& Ro);
}

#endif // !SDDS_INTARRAY


