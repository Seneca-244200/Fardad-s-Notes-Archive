namespace acc {
   struct Employee {
      void display() {

      }
   };
}

namespace hr {
   struct Employee {
      void display() {

      }
   };
}

namespace acc {
   struct Salary {

   };
}

using namespace acc;
using namespace hr;
int main() {
   Salary S;
   hr::Employee emp;
   acc::Employee E;
   E.display();
}