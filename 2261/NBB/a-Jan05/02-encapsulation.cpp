//This does not compile
#include <iostream>
using namespace std;
struct List {
   int num[100];
};


void print(const struct List* l) {
   // you print the list
}

struct OOList {
   int num[100];
   void print();
};

struct Transcript {
   double marks[20];
   void print();
};

int main() {
   cout << "Hello everyone!" << endl;
   return 0;
}