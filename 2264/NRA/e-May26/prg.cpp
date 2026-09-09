#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;

int main() {
    cout << "OOP244 NRA - May 26" << endl;
    Name n;// no arg constructor, default constructor
    Name J("John", "Doe"); // 
 //   n.set("Fred", "Soley");
    n.display();
    cout << endl;
    n.set("Homer", "Simpson");
    n.display();
    cout << endl;
    J.display();
    cout << endl;
    return 0;
}