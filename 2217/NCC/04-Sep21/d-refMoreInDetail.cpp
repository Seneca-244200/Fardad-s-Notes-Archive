#include <iostream>
using namespace std;
void foo(int& R) {
   cout << R << endl;
   R += 10;
}

void getInt(int& V) {
   cout << "Int: ";
   cin >> V;
}
// good
bool getGpa(double& gpa) {
   cout << "Gpa: ";
   cin >> gpa;
   return (gpa > 0 && gpa < 4.001);
}
/* rookie
bool getGpa(double& gpa) {
   bool res;
   cout << "Gpa: ";
   cin >> gpa;
   if (gpa > 0 && gpa < 4.001) {
      res = true;
   }
   else {
      res = false;
   }
   return res;
}
*/
int main() {
   int value = 50; // at line 3: void foo(int& R = value){
   double StGpa;
   foo(value);
   cout << value << endl;
   getInt(value);
   cout << value << endl;
   if (!getGpa(StGpa)) {
      cout << "Stdudent GPA is invalid " << endl;
   }
   else {
      cout << StGpa << endl;
   }
   return 0;
}