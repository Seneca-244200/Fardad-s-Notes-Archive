#include <iostream>
#include "Utils.h"

// Step1: : check if the reading took place
// correctly: to do that, we check if istr is in a correct
// state -> if (istr) in the Utils.cpp file


using namespace std;
using namespace sdds;

int main() {
    int a;
    // set the m_debug in ut to true
    ut.debug(true);
    ut.getint(a, 8, -6, "Enter An integer: \n >>", cin);
    cout << "You entered: " << a;
    return 0;
}
