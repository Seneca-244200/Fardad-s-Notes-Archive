class Base {
private:
   // only for the base
protected:
   // only for family
public:
   // for everyone 
   Base() {

   }
};

class Derived : public Base {
public:

};

int main() {
   int i;
   i = 10;
   int j = 10;


   return 0;
}