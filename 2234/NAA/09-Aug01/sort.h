#ifndef SDDS_SORT_H
#define SDDS_SORT_H
namespace sdds {

   /// <summary>
   /// cc: copy constructor
   /// ca: copy assignment
   /// </summary>
   /// <typeparam name="T">type to swapt</typeparam>
   /// <param name="a">address of first object</param>
   /// <param name="b">address of second object</param>
   template <typename T>
   void swap( T* a, T* b );

   /// <summary>
   /// tg: type &gt; type must be defined
   /// tl: type &lt; type must be defined
   /// </summary>
   /// <typeparam name="type">primitive or compsite</typeparam>
   /// <param name="array">Array of types</param>
   /// <param name="size">size of the array</param>
   /// <param name="Ascend">dirction of sort</param>

   template <typename type>
   void sort( type* array, size_t size, bool Ascend = true ) {
      size_t i{}, j{};
      for ( i = 0; i < size - 1; i++ ) {
         for ( j = 0; j < size - i - 1; j++ ) {
            if ( Ascend ) {
               if ( array[j] > array[j + 1] ) {   // tg
                  swap( &array[j], &array[j + 1] );
               }
            }
            else {
               if ( array[j] < array[j + 1] ) {   // tl
                  swap( &array[j], &array[j + 1] );
               }
            }
         }
      }

   }
   /*
   cc: copy constructor
   ca: copy assignment
   */
   template <typename T>
   void swap( T* a, T* b ) {
      T t = *a;  //cc
      *a = *b;   // ca
      *b = t;    // ca
   }
}
#endif // !SDDS_SORT_H
