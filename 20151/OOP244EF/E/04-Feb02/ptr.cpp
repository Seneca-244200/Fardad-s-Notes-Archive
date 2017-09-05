#include <cstdio>
using namespace std;
int main(){
  int i = 4;
  int* p = 4;
  i++;
  printf("%d\n", i);
  p++;
  printf("%d\n", i);
  return 0;
}