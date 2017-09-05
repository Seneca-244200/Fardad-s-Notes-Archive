//cat.h

struct Cat
{
public:
 int GetAge();
 void SetAge(int Age);
 int GetWeight();
 void SetWeight(int Weight);
 void Meow();
 
 private:
 int itsAge;
 int itsWeight;

};
