#include <cstdio>
using namespace std;
int main() {
   char ch = 'A';
   int a, b = 1, c = 0, d = 25;
   a = ch < 'Z';
   printf("%d\n", a);
   a = ch > 'Z';
   printf("%d\n", a);

   a = (b && d);
   printf("%d\n", a);
   a = b <= 1 && d > 100;
   printf("%d\n", a);


   return 0;
}