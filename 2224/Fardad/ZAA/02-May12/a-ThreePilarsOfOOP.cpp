struct HardDrive {  // Class
   int Size;    // member variable is called an attribute in OO
   int Speed;
   char brand[20];
   double price;
   int amountOfData;
   void read() {  // member function is called a METHOD in OO (or behaviour)

   }
   void write() {

   }
};
struct Book {
   int pages;
   void read() {

   }
};
int main() {
   int i;
   struct HardDrive A;

   struct Book B;
   B.read();


   struct HardDrive hd[500];
//   read(&hd[1]);
   hd[1].read();
//   write(&hd[234]);
   hd[234].write();
   return 0;
}

// Encapsulation
// Polymorphism  doing the samething in different ways
// Inheritance 
