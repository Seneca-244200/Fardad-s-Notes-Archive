#include <iostream>
#include "BarChart.h"
using namespace sict;
using namespace std;
#include <iostream>
#include "BarChart.h"
using namespace sict;
using namespace std;


int main() {
   int vals[] = { 30,50,40 };
   BarChart B(2), C(vals, 3), A(C);
   cout << "Enter 2 Barchart value samples:" << endl;
   cin >> B;
   cout << "A: " << endl;
   cout << A << endl;
   cout << "B: " << endl;
   cout << B << endl;
   cout << "C: " << endl;
   cout << C << endl;
   cout << "Min value in B: " << -B << endl;
   cout << "Max value in C: " << +C << endl;
   cout << "A = B + C: " << endl;
   A = B + C;
   cout << A << endl;
   cout << "C += B: " << endl;
   C += B;
   cout << C << endl;
   cout << "Average value of all samples: " << int(C) << endl;
   cout << "A = B: " << endl;
   A = B;
   cout << A << endl;
   return 0;
}
//int main() {
//
//   int vals[] = { 30,50,40 };
//   BarChart B(2), C(vals, 3), A(C);
//   cout << "Enter 2 Barchart value samples:" << endl;
//   B.read();
//   cout << "A: " << endl;
//   A.display() << endl;
//   cout << "B: " << endl;
//   B.display() << endl;
//   cout << "C: " << endl;
//   C.display() << endl;
//   cout << "Min value in B: " << B.min() << endl;
//   cout << "Max value in C: " << C.max() << endl;
//   cout << "B.merge(C) " << endl;
//   A = B.merge(C);
//   C = C;
//   cout << "B: " << endl;
//   B.display() << endl;
//   cout << "C += B: " << endl;
//   cout << "A: " << endl;
//   A.display() << endl;
//   cout << "Average value of all samples: " << C.average() << endl;
//   return 0;
//}