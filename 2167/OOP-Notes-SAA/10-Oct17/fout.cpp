#include <cstdio>
using namespace std;
class Output {
public:
   Output& operator<<(int a) {
      printf("%d", a);
      return *this;
   }
   Output& operator<<(const char* s) {
      printf(s);
      return *this;
   }
};

int main() {
   Output fout;
   fout<<"hello my name is Fardad\nMy employee number is "<<1234565<<"\n";
   return 0;
}