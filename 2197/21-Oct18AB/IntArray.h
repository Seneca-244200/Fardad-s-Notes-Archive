#ifndef SDDS_INTARRAY_H__
#define SDDS_INTARRAY_H__
namespace sdds {
   class IntArray {
      int* m_data;
      unsigned int m_size;
   public:
      IntArray();
      IntArray(const IntArray& IA);
      ~IntArray();
      IntArray(unsigned int size);
      IntArray(const int* array, unsigned int size);
      int size()const;
      int& elementAt(unsigned int index);
      operator bool()const;
      bool operator!()const;
      IntArray& operator=(const IntArray& IA);
      void resize(unsigned int newSize);
      int& operator[](unsigned int index);
      //operator int* ();
      //operator const int* ()const;
   };

}
#endif