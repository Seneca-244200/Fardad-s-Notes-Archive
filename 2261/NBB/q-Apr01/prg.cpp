#include <iostream>
#include "Contact.h"
using namespace std;
int main() {
    Contact C("Fred", "1 Yonge street");
    Contact Copy(C);
    return 0;
}