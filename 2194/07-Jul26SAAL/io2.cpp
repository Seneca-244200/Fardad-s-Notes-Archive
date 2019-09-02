#include <cstdio>
using namespace std;

class output {
public:
  const output& prn(int val)const {
    printf("%d", val);
    return *this;
  }
  const output& prn(const char* str)const {
    printf(str);
    return *this;
  }
};
int main() {
  output fout;
  fout.prn("My name is Fardad and I am ").prn(50).prn(" years old!\n");
  return 0;
}