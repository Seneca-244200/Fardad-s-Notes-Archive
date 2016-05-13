int& foo(){
  int a = 25;
  return a; // does not make sense since as is just about to die.
}


int main(){
  int b = foo();
  return 0;
}