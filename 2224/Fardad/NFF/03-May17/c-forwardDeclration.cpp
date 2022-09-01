


struct Chicken; // forward Declration (kind of function prototype)

struct Egg {
   int no_of_yolks;
   Chicken* mom;
};


struct Chicken {
   Egg e[6];
};


void foo(); // prototype
int main() {
   foo();
   return 0;
}

void foo() {

   // does something
}