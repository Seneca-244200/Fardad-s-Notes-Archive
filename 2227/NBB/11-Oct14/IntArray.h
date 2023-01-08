#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data = nullptr;// in all cases m_data will be null when the IntArray is instantiated
      unsigned int m_size;
   public:
      IntArray(unsigned int size = 1);
      IntArray(const IntArray& I);
      IntArray& operator=(const IntArray& I);
      IntArray& operator=(const int array[]);
      IntArray& set(const int array[], unsigned arraySize);
      ~IntArray();
      void resize(unsigned newsize);
      unsigned size()const;
      operator bool()const;
      int& operator[](unsigned int index);
      const int& operator[](unsigned int index)const;
   };
}
#endif // !SDDS_INTARRAY_H


