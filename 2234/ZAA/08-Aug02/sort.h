#ifndef SDDS_SORT_H
#define SDDS_SORT_H
namespace sdds {
   /// <summary>
/// T must support rule of three
/// </summary>
/// <typeparam name="T">object type</typeparam>
/// <param name="a">address of object to be swapped</param>
/// <param name="b">address of object to be swapped</param>
   template <typename T>
   void swap( T* a, T* b );



   /// <summary>
   /// T > T and t < T must be defined
   /// </summary>
   /// <typeparam name="T"></typeparam>
   /// <param name="array"></param>
   /// <param name="size"></param>
   /// <param name="Ascend"></param>
   template <typename T>
   void sort( T array[], size_t size, bool Ascend = true ) {
      size_t i{}, j{ };
      for ( i = 0; i < size - 1; i++ ) {
         for ( j = 0; j < size - i - 1; j++ ) {
            if ( Ascend ) {
               if ( array[j] > array[j + 1] ) {
                  swap( &array[j], &array[j + 1] );
               }
            }
            else {
               if ( array[j] < array[j + 1] ) {
                  swap( &array[j], &array[j + 1] );
               }
            }
         }
      }
   }

   template <typename T>
   void swap( T* a, T* b ) {
      T temp = *a;
      *a = *b;
      *b = temp;
   }
}
#endif // !SDDS_SORT_H
