#pragma once
#include "Animal.h"
void foo() {
   int i = 10;
   int j = 3;
   if(j == 3) {
      int i;  // shadows the outer i
      for(i = 0; i < 20; i++) {

      }
   }

   cout << i << endl; // 10 will be printed
}


namespace sdds {

   // A cat IS an Animal
   // : public   (is)
   class Cat : public Animal {
      // A cat HAS number of lives
      int m_numOfLives;
   public:
      Cat(const char* name=  "Garfield",
        int numOfLives = 9);
      void act();  // override the parents act class (special type of shadowing)
     // void move();
      void sound();
      void play();
      ~Cat();
   };
}

