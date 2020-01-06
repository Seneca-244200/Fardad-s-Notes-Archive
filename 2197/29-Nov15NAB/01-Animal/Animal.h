#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__

namespace sdds {
   class Animal {
      char* m_name;
   public:
      Animal(const char* name = "");
      virtual ~Animal();
      void name(const char* value);
      const char* name()const;
      void setEmpty();
      bool isEmpty()const;
      operator bool()const;
      std::ostream& display(std::ostream& os = std::cout)const;
      std::istream& read(std::istream& is = std::cin);
      void act()const;
      void move()const;
      void sound()const;
   };
   std::ostream& operator<<(std::ostream& os, const Animal& toBePrinted);
   std::istream& operator>>(std::istream& is, Animal& toBeRead);
}

#endif