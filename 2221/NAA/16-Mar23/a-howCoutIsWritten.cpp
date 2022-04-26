#include <cstdio>
using namespace std;
class Output {
public:
   Output& operator<<(int a) {
      printf("%d", a);
      return *this;
   }
   Output& operator<<(double d) {
      printf("%.2lf", d);
      return *this;
   }
   Output& operator<<(const char* str) {
      printf(str);
      return *this;
   }
};
Output fout, ferr, flog;

int main() {
   char name[] = "Fardad";
   fout<<"Hello I am "<<name<<" teaching OOP"<<244<<" around "<<0.75<<" percent of the time\n";
   return 0;
}