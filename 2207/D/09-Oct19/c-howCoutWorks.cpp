#include <cstdio>
using namespace std;
class Output {
public:
   Output& operator<<(int val) {
      printf("%d", val);
      return *this;
   }
   Output& operator<<(const char* str) {
      printf("%s", str);
      return *this;
   }
};

int main() {
   Output fout;
   fout << "My name is Jack and I am " << 25 << " years old\n";

   return 0;
}