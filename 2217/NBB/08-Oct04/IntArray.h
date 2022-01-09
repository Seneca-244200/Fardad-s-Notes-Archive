#ifndef SDDS_INTARRAY
#define SDDS_INTARRAY
#include <iostream>
namespace sdds {
   class IntArray {
      //int* m_data = nullptr;  // first option that is the best
      int* m_data{ nullptr };  // first option that is the best
      int m_size{ 1 };
      void resize(int newsize);
   public:
      IntArray(int size = 1);
      IntArray(const IntArray& cp); 
      IntArray& operator=(const IntArray& cp);
      int& operator[](int index);
      const int& operator[](int index)const;
      int size()const;
      ~IntArray();
      std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr, const IntArray& Ro);

}

#endif // !SDDS_INTARRAY


