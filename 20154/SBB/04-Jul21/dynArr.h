#ifndef _244_DYNARR_H_
#define _244_DYNARR_H_
namespace oop244{
   class DynArr{
      double* _data;
      int _size;
      double _junk;

   public:
      DynArr();
      DynArr(int size);
      DynArr(const double* dblArr, int size);
      bool empty();
      int size()const;
      double& element(int index);
      double& operator[](int index);
      virtual ~DynArr();
      void resize(int newsize);
   };





}
#endif