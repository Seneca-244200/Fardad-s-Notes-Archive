#include "Hero.h"
namespace scit {
  std::ostream& operator<<(std::ostream& os, const Hero& theHero) {
    return theHero.display(os);
  }
}