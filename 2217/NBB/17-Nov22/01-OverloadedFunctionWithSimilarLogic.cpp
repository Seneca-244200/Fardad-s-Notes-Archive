#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Mark {
   int m_data;
public:
   Mark(int data = 0) :m_data(data) {
   }
   Mark operator+(const Mark& Ro) {
      return Mark(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "M" << m_data;
   }
};

ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}



class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   Container operator+(const Container& Ro) {
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "C" << m_data;
   }
};

ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}

double sum(double x, double y) {
   return x + y;
}
int sum(int x, int y) {
   return x + y;
}
Container sum(Container x, Container y) {
   return x + y;
}


//type sum(type x, type y) {
//   return x + y;
//}

Mark sum(Mark x, Mark y) {
   return x + y;
}

int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container R, C = 20, D = 30;
   Mark L, M = 55, N = 35;


   e = sum(f, 30.7234);
   cout << "e: " << e << endl;
   a = sum(b, 40);
   cout << "a: " << a << endl;
//   R = sum(C, 10); // sum(Container x = C, Container y = 10);
   R = sum(C, D);
   cout << "R: " << R << endl;
   L = sum(M, N);
   cout << "L: " << L << endl;
   return 0;
}