

struct Chicken;  // forward declration  (kind of like prototypes for a fucntion)

struct Egg {
   Chicken* chikPtr;
   int whatever;
};

struct Chicken {
   Egg e[20];
};


//-------------------------------------------
// this forward declaration is wrong and you can not do it. since Egg must be instantiated
struct Egg;  // forward declaration does not have enough information to create a structure

struct Chicken {
   Egg e[20];
};

struct Egg {
   Chicken* chikPtr;
};



