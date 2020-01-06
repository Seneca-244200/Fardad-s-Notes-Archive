#include <cstdio>
using namespace std;

class Output {
public:
   Output& operator<<(int val) {
      printf("%d", val);
      return *this;
   }
   Output& operator<<(const char* cString) {
      printf(cString);
      return *this;
   }
};

int main() {
   Output fout;
   fout<<"My name is jack and I am "<<35<<" years old!\n";
   return 0;
}