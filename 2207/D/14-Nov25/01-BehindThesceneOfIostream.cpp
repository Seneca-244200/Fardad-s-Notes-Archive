#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
class Output {
public:
   Output& operator<<(int a) {
      printf("%d", a);
      return *this;
   }
   Output& operator<<(const char* Cstr) {
      printf(Cstr);
      return *this;
   }
};
class Input {
public:
   Input& operator>>(int& a) {
      scanf("%d", &a);
      return *this;
   }
   Input& operator>>(char* Cstr) {
      scanf("%s", Cstr);
      return *this;
   }
};
int main() {
   Output fout;
   Input fin;
   char name[51];
   fout<<"My name is Jack and I am "<<"45"<<" years old\n";
   fout << "What is your name?";
   fin >> name;
   fout << "Hello " << name << " how are you?\n";
   return 0;
}