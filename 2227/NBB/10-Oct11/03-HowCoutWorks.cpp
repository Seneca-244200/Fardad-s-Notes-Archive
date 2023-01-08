#include <cstdio>
using namespace std;
class output {
public:
   output& operator<<(int val) {
      printf("%d", val);
      return *this;
   }
   output& operator<<(double val) {
      printf("%.2lf", val);
      return *this;
   }
   output& operator<<(const char* val) {
      printf(val);
      return *this;
   }
};
int main() {
   output fout;
   int age = 35;
   double salary = 123456.45;
   fout << "Hello I am a progammer, I am " << age << " year old and I am make " << salary << " Dollara a year!\n";
   return 0;
}