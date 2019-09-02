#ifndef HERO_H
#define HERO_H

#include <iostream>
namespace sict {


  class Hero {
  public:
    // add the following method and do what originaly you were to do in the freind function.
    std::ostream& display(std::ostream& os = std::cout)const;

  };
  std::ostream& operator<<(std::ostream& os, const Hero& theHero);
}

#endif