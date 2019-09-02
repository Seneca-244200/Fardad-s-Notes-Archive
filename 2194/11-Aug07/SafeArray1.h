#ifndef SICT_SAFEARRAY_H__
#define SICT_SAFEARRAY_H__

template <class T, int N>
class SafeArray {
  T a[N];
public:
  T& operator[](int i) { return a[i%N]; }
};

#endif // !SICT_SAFEARRAY_H__




