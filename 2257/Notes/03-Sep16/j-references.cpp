#include <iostream>
using namespace std;

void addTen(int& a) {
   a += 10;
}

void addTen(int* ptr) {
   (*ptr) += 10;
}

int main() {
   int var = 100;
   int num = 20;

   addTen(var);//  void addTen(int& a = var);

   cout << var << endl;

   addTen(num); // void addTen(int&a = num);

   cout << num << endl;

   addTen(&num); // void addTen(int* ptr = &num);

   return 0;
}