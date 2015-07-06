//cat.h

class Cat
{
public:

 Cat();//non-argument constructor
 Cat(int,int);//overloaded constructor
 ~Cat();//destructor
 
 
 int GetAge();
 void SetAge(int Age);
 int GetWeight();
 void SetWeight(int Weight);
 void Meow();
 void display() const;
 
 private:
 int itsAge;
 int itsWeight;

};
