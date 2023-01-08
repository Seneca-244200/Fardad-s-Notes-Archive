#pragma once
#ifndef SDDS_CONTAINER_H_
#define SDDS_CONTAINER_H_
#include <iostream>
namespace sdds {
   class Container {
   private: // optional, since classes are private by default but good to have
      double m_amount;
      double m_volume;
      char* m_content;
      void init();
      void init(const char* m_content, double amount, double volume);
      void cleanUp();
   public:
      Container(); // constructor: will be called right after the object comes to life
      Container(const char* content);
      Container(const char* content, double amount, double volume);
      ~Container(); // destructor: will be called right before the object is dead;
      std::ostream& display(int row = 0)const;
      Container& read();
   };
}
#endif // !SDDS_CONTAINER_H_


