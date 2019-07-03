#include <iostream>
using namespace std;
class Box {

   int m_w; // width
   int m_h; // height
public:
   void set(int width, int height) {
      if (width > 0 && width < 70)
         m_w = width;
      else
         m_w = 10;
      if (height > 0 && height < 20)
         m_h = height;
      else
         m_h = 10;
   }
   void draw() {
      int i;
      int j;
      for (i = 0; i < m_w; i++) cout << '*';
      cout << endl;
      for (j = 0; j < m_h - 2; j++) {
         cout << '*';
         for (i = 0; i < m_w - 2; i++) cout << ' ';
         cout << '*' << endl;
      }
      for (i = 0; i < m_w; i++) cout << '*';
      cout << endl;
   }
};

int main() {
   Box b1;
   Box b2;
   Box b3;
   b2.set(15, 14);
   b1.set(5, 3);
   b3.set(100, 100);
   b1.draw();
   b2.draw();
   b3.draw();
   return 0;
}
