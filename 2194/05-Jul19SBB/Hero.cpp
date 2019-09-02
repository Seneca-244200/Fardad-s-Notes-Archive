#include "Hero.h"
namespace scit {
  ostream& Hero::display(ostream& os) const{
    return os << "whatever";
  }
  std::ostream& operator<<(std::ostream& os, const Hero& theHero) {
    return theHero.display(os);
  }
  const Hero& operator*(const Hero& leftOperand, const Hero& rightOperand) {
    const Hero*  winner;  // how to return a reference of one of two without temp objects created.
    if () {
      winner = &leftOperand;
    }
    else {
      winner = &rightOperand;
    }
    return *winner;
}