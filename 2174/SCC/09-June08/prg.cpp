#include <cstdio>
using namespace std;

class output {
public:
   output& operator<<(const char* str){
      printf("%s", str);
      return *this;
   }
   output& operator<<(int i){
      printf("%d", i);
      return *this;
   }
};

int main() {
   output fout;
   int age = 50;
   fout<<"Hello my name is jack and I am "<<45<<" years old!\n";

   return 0;
}
