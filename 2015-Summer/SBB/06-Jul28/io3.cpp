#include <cstdio>
using namespace std;

class output{
public:
  output& operator<<(int val){
    printf("%d", val);
    return *this;
  }
  output& operator<<(const char* str){
    printf(str);
    return *this;
  }
};

int main(){
  output fout;
  fout<<"My name is Fardad and I am "<<50<<" years old!\n";
  return 0;
}