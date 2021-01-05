//In AccEmployee.h: 

namespace acc {
   struct Employee {
      char name[128];
      double salary;
   };
}
//int AccBenefits.h
namespace acc {
   struct Benefit {

   };
}


// in HrEmployee.h:

namespace hr {
   struct Employee {
      char name[128];
      int hiringYear;
      char education[128];
   };
}

/*
int foo() {
   acc::Employee accEmp, accEmp2;
   acc::Benefit accBen;
   hr::Employee hrEmp;
   accEmp.salary = 23456;
   hrEmp.hiringYear = 2003;
   return 0;
}

*/
/*
using namespace acc;
int foo() {
   Employee accEmp, accEmp2;
   Benefit accBen;
   hr::Employee hrEmp;
   accEmp.salary = 23456;
   hrEmp.hiringYear = 2003;
   return 0;
}
*/
using namespace acc;
using namespace hr;
int foo() {
   acc::Employee accEmp, accEmp2;
   Benefit accBen;
   hr::Employee hrEmp;
   accEmp.salary = 23456;
   hrEmp.hiringYear = 2003;
   return 0;
}
