#include <iostream>
#include "Student.h"
using namespace std;
using namespace seneca;

int main() {
    cout << "OOP244 NRA - May 26" << endl;
    Student S;
    S.set("Fred Soley", 123456);
    S.setPrg("CPA");
    formatStudent(S);
    return 0;
}