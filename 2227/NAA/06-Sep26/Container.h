#ifndef SDDS_CONTAINER_H_
#define SDDS_CONTAINER_H_
#include <iostream>
namespace sdds {
   class Container{
   private:
      int m_amount{};
      int m_volume{};
      char* m_content{};
      //void init();
      Container& clearup();
   public:
      Container(); // no argument constructor or default constructors

      Container(const char* content);
      Container(const char* content,
                int amount,
                int volume);



      ~Container();
      Container& set(const char* content, int amount, int volume = 220);
      bool isSafeEmpty()const;

      Container& setAmount(int value);
      std::ostream& display()const;
      Container& read();
   };
}
#endif

