#include <cstdio>
using namespace std;

class output{
public:
  void prn(int val){
    printf("%d", val);
  }
  void prn(const char* str){
    printf(str);
  }
};

int main(){
  output fout;
  fout.prn("My name is Fardad and I am ");
  fout.prn(50);
  fout.prn(" years old!\n");
  return 0;
}