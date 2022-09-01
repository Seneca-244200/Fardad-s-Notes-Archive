#include <iostream>
using namespace std;
struct HardDisk {   // Class
   int size;        // C++ member variables
   char brand[41];  // OO: attributes
   char grade[41];
   double price;
   int external;
   int ssd;
   int speed;
   int yearsOfWar;
   int content_size;
   void read() {    // C++ member functions
                        // OO: Method
   }
   void write() {

   }
};
struct NoteBook{
   int noOfPages;
   void read() {    // C++ member functions
                        // OO: Method
   }
   void write() {

   }

}


int print() {

}

int main() {
   int size;
   HardDisk hd[500];
   hd[3].read();
   hd[234].write();

   return 0;
}

// encapsulation: packing the data and behaviour together
// polymorphism: doing the same action in different ways
// inheritance: reuse the design of a class