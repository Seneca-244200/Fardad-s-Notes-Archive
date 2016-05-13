
#include <cstdio>
using namespace std;
class Output{
public:
  Output& operator<<(int value){
    printf("%d", value);
    return *this;
  }
  Output& operator<<(const char* value){
    printf("%s", value);
    return *this;
  }
};


int main(){
  Output fout;
  fout<<"Hello, I am Fardad, and I make "<<20000000<<" Dollars a year!!!!\n");
  return 0;
}

