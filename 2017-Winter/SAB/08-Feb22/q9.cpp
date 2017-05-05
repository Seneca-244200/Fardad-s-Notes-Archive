#include <iostream>
using namespace std;
struct Object {
   int data;
   Object(int val = 2) {
      cout << (data = val);
   }
   ~Object() {
      cout << data;
   }
};


void w2(const char* str) {
   cout << str << endl;
}
void w2(int i = 10, char c= '-') {
   for (int j = 0; j < i; j++) {
      cout << c;
   }
   cout << endl;
}

void w3(char* str) {
   char* chs[6];
   int i, one = 1;
   for (i = 0; i < 5; i++) {
      one = -one;
      chs[i] = &str[(one*i) + 10];
   }
   chs[i] = &str[12];
   for (i = 0; i < 5; i++) {
      cout << *chs[i];
   }
   cout << " " << chs[i] << "!" << endl;
}


int& w1(int& R) {
   R -= 10;
   return R;
}

int main() {
   Object A(1), B, C = 3;
   int i = 10;
   int& R = i;
   w1(R) += 10;
   cout << endl << i << endl;
   cout << ((&i == &R)? "Yes" : "No") << endl;
   w2(2, '$');
   w2(5);
   w2();
   w2("Now what?");
   w3("XBEGEFDXOJ!GMOO");
   return 0;
}