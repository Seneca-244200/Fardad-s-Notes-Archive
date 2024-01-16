#pragma once
/// <summary>
/// Display the sum of the two types and returns them.<br/>
/// - Needs Copying<br/>
/// - insertion into ostream (operator&lt;&lt;) <br/>
/// - Needs operator+ for the type
/// </summary>
/// <typeparam name="Hoohoo">The type</typeparam>
/// <param name="f">left argument</param>
/// <param name="s">right argument</param>
/// <returns>the sum with type Hoohoo</returns>
template <typename Hoohoo>
Hoohoo displaySum( Hoohoo f, Hoohoo s ) {
   Hoohoo sum = f + s;
   cout << "sum: " << sum << endl;
   return sum;
}

/// <summary>
/// - keyType must be safe to be copied <br/>
/// - arryType::operator==(keyType)const must be defined<br/>
/// </summary>
/// <typeparam name="arrayType"></typeparam>
/// <typeparam name="keyType"></typeparam>
/// <param name="ma"></param>
/// <param name="size"></param>
/// <param name="key"></param>
/// <returns></returns>
template<class arrayType, class keyType>
size_t count( const arrayType ma[], size_t size, keyType key ) {
   size_t cnt{ };
   for ( size_t i = 0; i < size; i++ ) {
      if ( ma[i] == key ) cnt++;
   }
   return cnt;
}
/// <summary>
/// arrayType[i] needs to be insertable into ostream
/// </summary>
/// <typeparam name="arrayType"></typeparam>
/// <param name="ma"></param>
/// <param name="size"></param>
template<typename arrayType>
void display( const arrayType ma[], size_t size ) {
   for ( size_t i = 0; i < size; i++ ) {
      if ( i != 0 ) cout << ", ";
      cout << ma[i];
   }
   cout << endl;
}

template <typename T>
void swap( T* a, T* b ) {
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
void sort( AT array[], size_t size ) {
   size_t i, j;
   for ( i = 0; i < size - 1; i++ ) {
      for ( j = 0; j < size - i - 1; j++ ) {
         if ( array[j] > array[j + 1] ) {
            swap( &array[j], &array[j + 1] );
         }
      }
   }
}

