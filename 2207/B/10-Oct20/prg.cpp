#include <cstdio>
using namespace std;
class Output {
public:
   Output& operator<<(int val) {
      printf("%d", val);
      return *this;
   }
   Output& operator<<(const char* cstr){
      printf("%s", cstr);
      return *this;
   }
   Output& operator<<(double val) {
      printf("%lf", val);
      return *this;
   }
};
int main() {
   Output fout;
   char name[] = "Fardad";
   fout<<"My name is "<<name<<" my student number is "<<12345<<" and my gpa is "<<3.5<<"\n";
   return 0;
}