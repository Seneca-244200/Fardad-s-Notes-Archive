#include <cstdio>
using namespace std;
struct Student {
   double gpa;
   int stno;
   int semester;
};
void foo(int a[]) {
   printf("%d\n", sizeof(a));
}

int main() {
   int ar[10];
   double d;
   printf("%d\n", sizeof(long double));
   printf("%d\n", sizeof(double));
   printf("%d\n", sizeof(d));
   printf("%d\n", sizeof(long));
   printf("%d\n", sizeof(long long));
   printf("%d\n", sizeof(Student));
   printf("%d\n", sizeof(ar));
   foo(ar);
   return 0;
}