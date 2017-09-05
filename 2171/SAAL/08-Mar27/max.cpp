
template <typename T>
T max(T a[],int size) {
   T theMax = a[0];
   int i;
   for (i = 1; i < size; i++) {
      if (theMax < a[i]) {
         theMax = a[i];
      }
   }
   return theMax;
}

