

struct Egg; // Wrong forward Declration 
            // it will not work, since Chicken needs to know how to build an Egg
            // and the forward Declration does not have enough information to do so

struct Chicken {
   Egg e[6];
};



struct Egg {
   int no_of_yolks;
   Chicken* mom;
};




void foo();
int main() {
   foo();
}


void foo() {

}