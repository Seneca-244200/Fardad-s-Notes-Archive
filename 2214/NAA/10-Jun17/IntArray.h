#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data;
      int m_size;
   public:
      IntArray(int size=1);
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& Ro);
      int size()const;
      int& operator[](int index);
      void resize(int newsize);
      ~IntArray();
   };

}

#endif // !SDDS_INTARRAY_H


