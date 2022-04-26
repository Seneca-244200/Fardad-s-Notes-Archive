#include <iostream>
using namespace std;
void w1() {
   int a;
   int& b = a;
   a = 5;
   b = 10;
   a = a + b;
   cout << a << "-" << b << endl;
}
int& ref(int& r, int s) {
   r *= s;
   return r;
}
void w2() {
   int A = 5;
   ref(A, 2) += 5;
   cout << A << endl;
}
struct GFT {
   const char* str() {
      return "GFT";
   }
};
struct FT :public GFT {
   virtual const char* str() {
      return "FT";
   }
};
struct CHLD :public FT {
   const char* str() {
      return "CHLD";
   }
};
struct GCHLD :public CHLD {
   const char* str() {
      return "GCHLD";
   }
};
void w3() {
   GFT g; FT f; CHLD c; GCHLD gc;
   GFT* gp[] = { &g, &f, &c };
   FT* fp[] = { &f, &c, &gc };
   CHLD* ch[] = { &c, &gc };
   int i;
   for (i = 0; i < 3; i++) {
      cout << gp[i]->str() << "\t";
   }
   cout << endl;
   for (i = 0; i < 3; i++) {
      cout << fp[i]->str() << "\t";
   }
   cout << endl;
   for (i = 0; i < 2; i++) {
      cout << ch[i]->str() << "\t";
   }
   cout << endl;
}
void w4(char ch) {
   cout << "C" << ch << "-";
}
void w4(int a) {
   w4('I');
   cout << a << endl;
}
void w4(double d) {
   w4('D');
   cout << d << endl;
}
int main() {
   cout << "W1 ---------- " << endl;
   w1();
   cout << "W2 ---------- " << endl;
   w2();
   cout << "W3 ---------- " << endl;
   w3();
   cout << "W4 ---------- " << endl;
   w4(4.);
   return 0;
}
