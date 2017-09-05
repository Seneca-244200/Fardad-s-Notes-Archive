#ifndef _244_DYNARR_H_
#define _244_DYNARR_H_

namespace oop244{
   class DynArr{
      double* _data;
      int _size;
      double _junk;
      void resize(int newsize);
   public:
      DynArr();
      DynArr(int size);
      DynArr(const double* DblArr, int size);
      int size()const;
      bool empty();
      double& element(int index);
      double& operator[](int index);

      virtual ~DynArr();
   };



}



#endif