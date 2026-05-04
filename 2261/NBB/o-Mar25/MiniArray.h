#pragma once
template <class T, int N=100>
class Array {
    T a[N];
public:
    T& operator[](int i) { return a[i % N]; }
    const T& operator[](int i)const { return a[i % N]; }
    int size()const { return N };
};