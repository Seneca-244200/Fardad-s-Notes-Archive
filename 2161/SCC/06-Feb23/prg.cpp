#include <cstdio>
using namespace std;
class Output{
public:
  Output& operator<<(int value){
    printf("%d", value);
    return *this;
  }
  Output& operator<<(const char* str){
    //printf("%s", str);
    printf(str);
    return *this;
  }
};

int main(){
  Output fout;
  fout<<"Hello I am Fardad and I make "<<23456789<<" Dollars a year!!!\n";
  return 0;
}