// Encapsulation
// Polymorphism
// inheritance

namespace fin {
   struct Employee {
      double salary;
      // whatever the finance division of seneca needs
   };
}




namespace acd {
   struct Employee {
      char subject[50];
      // whatever the academic division of seneca needs
   };
}

/*
struct Student {
   char name[51];
};

this is an error because of collision of names
struct Student {
   int stid;
};
*/

namespace acd {
   struct Chair {
      struct Employee profs[50];
   };
}

#include <iostream>
using namespace std;
using namespace fin;
int main() {
   struct Employee FE;
   struct acd::Employee AE;
  
   FE.salary = 12345.67;
   strcpy(AE.subject, "OOP244");


   double money = 12.34;
   cout << "Hello everyone!" << endl;
   cout << "My name is Fardad and I am ";
   cout << 55;
   cout << " years old!" << endl;
   cout << " and I have ";
   cout << money;
   cout << " in my pocket!" << endl;
   return 0;
}