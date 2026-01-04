#include <iostream>
using namespace std;
struct PhoneNumber {
   int area;
   int number;
};

void dial(PhoneNumber pn) {
   cout << "Dialing (" << pn.area << ") " << pn.number << endl;
}
void set(PhoneNumber* pn, int area, int number) {
   pn->area = area;
   pn->number = number;
}

int main() {
   cout << "OO244 Sep09" << endl;
   PhoneNumber myNumber;
   set(&myNumber, 416, 5551234);
   dial(myNumber);
   return 0;
}