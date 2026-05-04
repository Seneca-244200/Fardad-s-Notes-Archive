#include <iostream>
#include "TitledName.h"
using namespace std;
int main() {
    TitledName n("Mr", "Jack");
    TitledName m("Miss", "Jane");
    TitledName copy(n);
    copy.print() << endl;
    m = n;
    m.print() << endl;
    return 0;
}