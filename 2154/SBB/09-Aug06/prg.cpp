template <typename Type>
Type findMax(Type A[], int size){
  Type max = A[0];
  int i;
  for (i = 1; i < size; i++){
    if (max < A[i]){
      max = A[i];
    }
  }
  return max;
}
