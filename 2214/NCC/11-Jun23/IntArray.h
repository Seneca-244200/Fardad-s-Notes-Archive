#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
#include <iostream>
namespace sdds {
   class IntArray {
 //     int* m_data = nullptr;
      int* m_data{};
      int m_size;
   public:
      IntArray(int size = 1);

      // these are applying rule of three
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& I);
      ~IntArray();

      int& operator[](int index);
      int size()const;
      void resize(int newsize);

      std::ostream& print(std::ostream& ostr = std::cout)const;

   };
   std::ostream& operator<<(std::ostream& ostr, const IntArray& I);
}

#endif // !SDDS_INTARRAY_H