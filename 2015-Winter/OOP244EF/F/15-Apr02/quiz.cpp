int findmax(int a[], int size){
  int max = A[0];
  int i;
  for(i=1;i<size;i++){
    if(max < A[i]){
      max = A[i];
    }
  }
  return max;
}