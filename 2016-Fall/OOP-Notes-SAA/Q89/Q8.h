//Q8 
template <typename T>
int search(const T array[], const T& val, int size) {
   int i = 0;
   int foundIndex = -1;
   for (i = 0; i < size; i++) {
      if (array[i] == val) {  // bool opertator==(const T&, const T&) must exist or work by default
         foundIndex = i;
      }
   }
   return i;
}
