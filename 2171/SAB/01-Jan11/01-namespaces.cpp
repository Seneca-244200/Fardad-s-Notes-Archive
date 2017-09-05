namespace acc {
   struct Student {
      // accounting stuff
   };
   struct Loan {

   };
}
namespace edu {

   struct Student {

      // educational stuff
   };
}
using namespace acc;
using namespace edu;
int main() {
   Loan l;
   acc::Student a1;
   edu::Student a2;
}


