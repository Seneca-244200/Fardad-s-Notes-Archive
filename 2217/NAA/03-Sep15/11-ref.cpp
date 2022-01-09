#include <iostream>
using namespace std;

void addTen(int& i);
void addTen(int* p);

int main(){
   int v = 30;
   addTen(v);
   cout << v << endl;
   addTen(&v);
   cout << v << endl;
   return 0;
} 

void addTen(int& i) {
   i += 10;
}
void addTen(int* p) {
   (*p) += 10;  // *p is target of p and target of p is v, therefore 10 will be added to v
}

