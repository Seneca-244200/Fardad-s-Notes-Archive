namespace Acc {
   struct Student {
      //whatever account thing 
   };

}










namespace Adm {
   struct Student {
      // whateber admin stuff
   };
}


namespace Acc {
   struct OsapLoan {
      // whatever osap stuff
   };
}


using namespace Acc;
using namespace Adm;
int main() {
   Acc::Student Sacc;
   Adm::Student Sadm;
   OsapLoan ol;
   return 0;
}

