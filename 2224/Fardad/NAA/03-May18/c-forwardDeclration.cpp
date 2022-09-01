

struct Chicken; // forward Declration (kind of like a prototype for a function)
struct Egg {
   int no_of_yolks;
   Chicken* mom;
};

struct Chicken {
   Egg e[6];
};



void foo();
int main() {
   foo();
}


void foo() {

}