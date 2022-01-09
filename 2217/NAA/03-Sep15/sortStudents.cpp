#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
void prnStds(const Student* stptrs[], unsigned int size);
int main() {
   Student S[9] = {
      {"Lisa Simpson", 1289, 4.0 },
      {"Dubya Spuckler", 57889, 3.2},
      {"Jake Boyman", 2324, 2.9},
      {"Allison Taylor", 2341, 3.4},
      {"Jessica Lovejoy", 6543, 3.0},
      {"Dolph Starbeam", 34432, 3.3},
      {"Kearney Zzyzwicz", 12456, 1.5},
      {"Milhouse Van Houten", 45367, 3.7},
      {"Bart Simpson", 56643,2.1 }
   };
   const Student* nameSrt[9];
   const Student* stnoSrt[9];
   const Student* gpaSrt[9];
   cout << "Sort on name:" << endl;
   sortOnName(nameSrt, S, 9);
   prnStds(nameSrt, 9);
   cout << "Sort on Student number:" << endl;
   sortOnStno(stnoSrt, S, 9);
   prnStds(stnoSrt, 9);
   cout << "Sort on Student gpa:" << endl;
   sortOnGpa(gpaSrt, S, 9);
   prnStds(gpaSrt, 9);
   return 0;
}
void prnStds(const Student* stptrs[], unsigned int size) {
   pnrStdTitle();
   for (unsigned int i = 0; i < size; i++) {
      prnStudent(stptrs[i]);
   }
   cout << "--------------------+------+---" << endl;

}
