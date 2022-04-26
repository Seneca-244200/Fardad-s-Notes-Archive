#include <iostream>
#include "Mark.h"
#include "Transcript.h"
using namespace std;
using namespace sdds;
int main() {
   Transcirpt T("Fred Soley", "Fall", 2021);
   T += {"OOP244", 80, 100};
   for (int i = 0; i < 5; i++) {
      cout << T[i] << endl;  // to access individual marks
   }
   return 0;
}
