#ifndef SDDS_MARKS_H
#define SDDS_MARKS_H

void display();

namespace sdds {
   const int NOM = 50;

   class Marks {  // classes are always private by default
   //private:  // private member valriables
      char m_title[51];
      double m_values[NOM];
      int m_NoOfValues;
   public:
      // Getters or Accessors or Queries
      void display()const;
      bool inSafeEmpty()const;
      // Setters, Modifiers, Mutators
      bool add(double mark);
      void init();
      void set(const char* title);
      void init(const char* title, const double values[], int NoOfValues);
   };

}
#endif // !SDDS_MARKS_H


