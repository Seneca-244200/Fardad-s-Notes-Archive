#include <cstdio>
using namespace std;

class output{
public:
  output& prn(int val){
    printf("%d", val);
    return *this;
  }
  output& prn(const char* str){
    printf(str);
    return *this;
  }
};
int main(){
  output fout;
  fout.prn("My name is Fardad and I am ").prn(50).prn(" years old!\n");
  return 0;
}