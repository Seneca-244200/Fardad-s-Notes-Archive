#pragma once
namespace sdds {

   /// <summary>
   /// Rule of thre must be applied
   /// 
   /// </summary>
   /// <typeparam name="heehaw"></typeparam>
   /// <param name="a"></param>
   /// <param name="b"></param>
   template <typename T>
   void swap( T* a, T* b ) {
      T temp = *a;
      *a = *b;
      *b = temp;
   }


   /// <summary>
   /// T must supprot rule of three and operator&lt;(T) operator&gt(T);
   /// </summary>
   /// <typeparam name="T"></typeparam>
   /// <param name="array"></param>
   /// <param name="size"></param>
   /// <param name="Ascend"></param>
   template <typename T>
   void sort( T array[], size_t size, bool Ascend = true ) {
      size_t i, j;
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

}