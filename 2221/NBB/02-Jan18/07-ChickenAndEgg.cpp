#include <iostream>
using namespace std;

struct Chicken;  // forward declration

struct Egg {
   Chicken* mother;
};


struct Chicken {
   Egg E;
};