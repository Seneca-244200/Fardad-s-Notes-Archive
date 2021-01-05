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
int foo() {
   acc::Employee accEmp;
   hr::Employee hrEmp;
   accEmp.salary = 23456;
   hrEmp.hiringYear = 2003;
}
using namespace acc;
int faa() {
   Employee accEmp;
   hr::Employee hrEmp;
   accEmp.salary = 23456;
   hrEmp.hiringYear = 2003;

}
