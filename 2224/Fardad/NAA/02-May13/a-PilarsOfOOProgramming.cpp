#include <iostream>
using namespace std;
struct HardDrive {  // Class
   int m_speed;         // C++: member variables
   int m_capacity;      // OO: Attributes  (Data of)
   double m_powerCon;
   int m_contenetVolume;
       // C++: member funtions
       // OO: Methods (behaviours)
   void store() {  // not possible in C, since it is not Object Oriented

   }
   void remove() {

   }
   void modify() {

   }
   void read() {

   }
};
int print() {

}

struct Bicycle {

};
struct MotorBike : Bicycle {

};

int main() {  // just a stand alone function
   HardDrive hd[500];
   //store(&hd[5]);
   hd[5].store();
   //remove(&hd[211]);
   hd[211].remove();
   //read(&hd[2]);
   hd[2].read();
   return 0;
}
// Encapsulation: Packing the data and behaviour together (attributes and member funciton)
// Ploymorphism: doing the same action in different ways
// Enheritance: reusing an already existing class's definition to make a new one.
// 
// "Is a" relationship: inheritance
// "Has a" relationship: attribute