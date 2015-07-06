#include <iostream>
using namespace std;
namespace Acc{
   struct Benefits{
      char whatever;
   };
}
namespace Hr{
   struct Employee{
      char name[41];
      int empno;
      char education[1024];
   };
}
namespace Acc{
   struct Employee{
      char name[41];
      int empno;
      int noOfchild;
      double salary;
      struct Benefits B;
   };
};
using namespace Acc;
int main(){
   struct Acc::Employee ae;
   struct Hr::Employee he;
   Benefits something;
   return 0;
}