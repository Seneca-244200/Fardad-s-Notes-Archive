#include <iostream>
<<<<<<< HEAD

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String Fullname;
   String name = "Fred";
   String lastname = "Soley";
   Fullname = name;
   Fullname += ++lastname;
   //lastname.operator++();
   //Fullname += lastname;
   Fullname.display() << endl;
   return 0;
}

=======
using namespace std;
int main() {
   cout << "07-Sep30 OOP244 NAA" << endl;
   return 0;
}
>>>>>>> b231cd53ae0ff32c2d105d50945f5bb3bc592700
