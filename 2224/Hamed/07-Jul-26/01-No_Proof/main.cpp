#include <iostream>
#include "Utils.h"

// First we are going to know how to do a fullproof
// data entry using cin and cout

// we first start with refining getint in the Utils library
using namespace std;
using namespace sdds;

int main() {
    
    int a;
    ut.getint(a,"Enter an integer \n>> ", cin);
    cout << a << endl;
    
    // now what if the entry is something that we don't expect??


    return 0;
}
