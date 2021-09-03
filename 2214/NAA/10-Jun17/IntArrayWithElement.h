#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data = nullptr;
      int m_size;
   public:
      IntArray(int size=1);
      int& element(int index);
      int size()const;
      void resize(int newsize);
      ~IntArray();
   };

}

#endif // !SDDS_INTARRAY_H


