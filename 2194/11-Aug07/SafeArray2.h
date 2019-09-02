#ifndef SICT_SAFEARRAY_H__
#define SICT_SAFEARRAY_H__

template <class T, int N>
class SafeArray {
  T garbage;
  T a[N];
public:
  T& operator[](int i) { 
    T* ret;
    if (i < N && i>= 0) {
      ret = &a[i];
    }
    else {
      ret = &garbage;
      garbage *= garbage;
    }
    return *ret;
  }
};

#endif // !SICT_SAFEARRAY_H__




