#include <iostream>
using namespace std;

class Food {
   float price;
protected:
   Food() { price = 0; cout << "F"; }
   void setPrice(const float _p) { price = _p; };
   float getPrice() const { return price; };
   ~Food() { cout << "~F"; }
public:
   virtual void display(ostream& os) const {
      os << "Food costs: " << price << endl;
   }
};

class Burger : public Food {
   int patties;
protected:
   float get() const;
   int get(bool) const;
public:
   Burger() { patties = 0; cout << "B"; };
   Burger(int, float);
   Burger(float _pri, int _pat) {
      patties = _pat; setPrice(_pri); cout << "B2";
   };
   void setPatties(int);
   virtual void display(ostream&) const;
   ~Burger() { cout << "~B"; }
};

Burger::Burger(int _pat, float _pri) {
   patties = 0;
   setPrice(_pri);
   if (_pat < 4)
      patties = _pat;
   cout << "B1";
}

float Burger::get() const {
   return getPrice();
}
int Burger::get(bool _out) const {
   if (_out)
      return patties;
   else
      return 0;
}
void Burger::setPatties(int _pat) {
   Burger tempBurger(_pat, getPrice());
   *this = tempBurger;
}
void Burger::display(ostream& os) const {
   os << "Burger patties: " << patties << ", Cost: $" << getPrice() << endl;
}

ostream& operator<<(ostream& os, const Food& _f) {
   _f.display(os);
   return os;
}

int main() {
   int patties = 2;
   float price = 5.32;
   Burger hb(price, patties);
   cout << "\n--------" << endl;
   cout << hb;
}

