#include <iostream>
using namespace std;
struct Box {
   int w; // width
   int h; // height
};
void draw(Box b) {
   int i;
   int j;
   for (i = 0; i < b.w; i++) cout<< '*';
   cout << endl;
   for (j = 0; j < b.h - 2; j++) {
      cout << '*';
      for (i = 0; i < b.w - 2; i++) cout << ' ';
      cout << '*' << endl;
   }
   for (i = 0; i < b.w; i++) cout << '*';
   cout << endl;
}
int main() {
   Box b1 = { 10, 4 };
   Box b2 = { 5, 6 };
   draw(b1);
   draw(b2);
   return 0;
}
