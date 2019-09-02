#include <cstdio>
using namespace std;

class output {
public:
  const output& operator<<(int val)const {
    printf("%d", val);
    return *this;
  }
  const output& operator<<(const char* str)const {
    printf(str);
    return *this;
  }
};
int main() {
  output fout;
  fout<<"My name is Fardad and I am "<<50<<" years old!\n";
  return 0;
}