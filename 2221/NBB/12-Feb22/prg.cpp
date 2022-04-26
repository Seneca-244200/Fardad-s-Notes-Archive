#include <iostream>
#include "Transcript.h"
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   //DV: this is not working, must fix
   Transcript T("Fred Soley", 12345, 2021);
   T.addMark({ "OOP244", 85, 100 });
   T.addMark({ "IPC144", 75, 100 });
   cout << T << endl;
   return 0;
}