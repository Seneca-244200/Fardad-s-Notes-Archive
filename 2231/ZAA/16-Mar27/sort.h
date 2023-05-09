#ifndef SDDS_SORT_H
#define SDDS_SORT_H
/// <summary>
/// swaps the the argument content
/// </summary>
/// <typeparam name="type">Rule of three</typeparam>
/// <param name="a"></param>
/// <param name="b"></param>
template <typename type>
void swap( type* a, type* b ) {
   type t = *a;
   *a = *b;
   *b = t;
}

/// <summary>
/// sorts the array
/// </summary>
/// <typeparam name="type">Rule of three and operator> </typeparam>
/// <param name="array">the array</param>
/// <param name="size">the number of elements of the array to be sorted</param>
template <typename type>
void sort( type* array, int size ) {
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

