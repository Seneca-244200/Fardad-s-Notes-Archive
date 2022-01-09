// Two departments at Seneca
/*finance Teams' file*/
namespace fin {

   struct Teacher {
      double Salary;
      int vacDays;
   };
   struct Manager {
      struct Teacher t[100];
   };
}


/*-------------------------*/
/*Academic Teams' file*/
namespace acd {
   struct Teacher {
      char subject[51];
      int noClasses;
      double rate;
   };

   struct Chair {
      struct Teacher t[20];
   };
   struct Student {
      int stid;
   };
}

namespace acd{
   struct Subject {
      char name[9];
   };
}

/*----------------*/

#include <iostream>
using namespace std;
using namespace acd;
using namespace fin;
int main() {
   struct acd::Teacher at[5];
   struct fin::Teacher ft[3];
   struct Subject S[50];

   return 0;
}