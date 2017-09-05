template <typename T>
bool search(T A[], T& foundStd, int& foundIndx, int key, int size){
  int foundIndx = -1;
  int i;
  bool found = false;
  for (i = 0; !found && i < size; i++){
    if (A[i] == key){
      foundStd = A[i];
      foundIndx = i;
      found = true;
    }
  }
  return found;
}
