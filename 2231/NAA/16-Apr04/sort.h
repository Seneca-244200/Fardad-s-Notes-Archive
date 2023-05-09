#pragma once
#ifndef SDDS_SORT_H
#define SDDS_SORT_H
//template<typename T>
//void swap( T* a, T* b );

/// <summary>
/// swaps the contents of two objects
/// </summary>
/// <typeparam name="type">Rule of three compatible</typeparam>
/// <param name="a">address of object to be swapped</param>
/// <param name="b">address of object to be swapped</param>
template <typename type>
void swap( type* a, type* b ) {
   type t = *a;
   *a = *b;
   *b = t;
}

/// <summary>
/// Sorts an array of objects
/// </summary>
/// <typeparam name="T">operator > must work with T</typeparam>
/// <param name="array">array to be sorted</param>
/// <param name="size">size of the array</param>
template <typename T>
void sort( T* array, int size ) {
   int i, j;
   for ( i = 0; i < size - 1; i++ ) {
      for ( j = 0; j < size - i - 1; j++ ) {
         if ( array[j] > array[j + 1] ) {
            swap( &array[j], &array[j + 1] );
         }
      }
   }
}


#endif // !SDDS_SORT_H

