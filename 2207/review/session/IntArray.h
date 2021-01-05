#ifndef SDDS_INTARRAY_H_
#define SDDS_INTARRAY_H_
namespace sdds {
   class IntArray {
      int* m_data;
      unsigned int m_size;
      void resize(unsigned int newsize);
      void setEmpty();
   public:
      bool isEmpty()const; 
      IntArray();
      IntArray(unsigned int size);
      IntArray(const IntArray& A);
      IntArray& operator=(const IntArray& A);
      ~IntArray();
      int& element(unsigned int index);
      int& operator[](unsigned int index);
      unsigned int size()const;
      operator bool()const;
 //      operator unsigned int() const; // conflict with opeator bool()
   //    operator const int* ()const; not possible because operator[] exists
   };
}



#endif // !SDDS_INTARRAY_H_
