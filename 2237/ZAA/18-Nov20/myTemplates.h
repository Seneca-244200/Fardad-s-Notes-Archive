#pragma once
#ifndef MYTEMPATES_H
#define MYTEMPATES_H
#include <iostream>

/// <summary>
/// a function template to calculate the sum and display it. This template requires operator+ and insertion operator for ostream defined for it type
/// </summary>
/// <typeparam name="type">object type</typeparam>
/// <param name="a">first object</param>
/// <param name="b">second objedt</param>
/// <returns>Sum of two objects</returns>
template <typename type>
type addAndDisplay(type a, type b) {
   type c = a + b;
   std::cout << "Sum is: " << c << std::endl;
   return c;
}

//template<class ArrayType, class KeyType> //  Old C++
template<typename ArrayType, typename KeyType>
size_t count(const ArrayType array[], size_t size, KeyType key) {
   size_t cnt{};
   for (size_t i = 0; i < size; i++) {
      if (array[i] == key) cnt++;
   }
   return cnt;
}

template<typename ArrayType>
void display(const ArrayType array[], size_t size) {
   for (size_t i = 0; i < size; i++) {
      if (i != 0) std::cout << ", ";
      std::cout << array[i];
   }
   std::cout << std::endl;
}

template <typename T>
void swap(T* a, T* b) {
   T temp = *a; // copy constructor
   *a = *b; // copy assignment
   *b = temp;
}

/// <summary>
/// function template to sort an array, requires operator> and rule of three
/// </summary>
/// <typeparam name="AT"></typeparam>
/// <param name="array"></param>
/// <param name="size"></param>
template <typename AT>
void sort(AT array[], size_t size) {
   size_t i, j;
   for (i = 0; i < size - 1; i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         }
      }
   }
}


#endif // !MYTEMPATES_H
