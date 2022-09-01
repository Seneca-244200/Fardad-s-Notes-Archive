


struct Egg; // Wrong forward Declration (kind of function prototype)
            // it will not work, since Chicken need to know how to build an Egg
            // and the forward Declration does not have enough information to do so

struct Chicken {
   Egg e[6];
};

struct Egg {
   int no_of_yolks;
   Chicken* mom;
};

void foo(); // prototype
int main() {
   foo();
   return 0;
}

void foo() {

   // does something
}