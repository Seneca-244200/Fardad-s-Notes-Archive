#ifndef  SENECA_BUBBLESORT_H
#define  SENECA_BUBBLESORT_H
#include "Container.h"
namespace seneca {

   /// <summary>
/// Swaps the values of two Ts and needs 
/// No Arg constructor, Assignable to another T 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a">Address of first object</param>
/// <param name="b">Address of second object</param>
   template <typename T>
   void swap(T* a, T* b) {
      T temp;
      temp = *a;
      *a = *b;
      *b = temp;
   }


   /// <summary>
   /// sorts an array in ascending or descending order! type must support &lt; and &gt;
   /// </summary>
   /// <typeparam name="type"></typeparam>
   /// <param name="arr">Array of types</param>
   /// <param name="size">size of the array</param>
   /// <param name="ascending">True or false</param>
   template <typename type>
   void bubbleSort(type arr[], 
        int size, bool ascending = true) {
      for (int i = 0; i < size - 1; ++i) {
         for (int j = 0; j < size - i - 1; ++j) {
            if (ascending) {
               if (arr[j] > arr[j + 1]) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j] < arr[j + 1]) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }


/// <summary>
/// sorts an array of Containers in ascending or descending order! type must support &lt; and &gt;
/// </summary>
/// <typeparam name="type"></typeparam>
/// <param name="arr">Array of types</param>
/// <param name="size">size of the array</param>
/// <param name="ascending">True or false</param>
   template <>
   void bubbleSort<Container>(Container arr[], 
                int size, bool ascending) {
      for (int i = 0; i < size - 1; ++i) {
         for (int j = 0; j < size - i - 1; ++j) {
            if (ascending) {
               if (arr[j].volume() > arr[j + 1].volume()) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j].volume() < arr[j + 1].volume()) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }


}

#endif // ! SENECA_BUBBLESORT_H

