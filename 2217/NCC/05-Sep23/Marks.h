#ifndef SDDS_MARKS_H
#define SDDS_MARKS_H
namespace sdds {
   const int MaxNoOfValues = 1000;
   class Marks {
   private:
      char m_title[51];
      double m_values[MaxNoOfValues];
      int m_noOfValues;
   public:
      // Getters, Accessors of Queries  (%99 of the time should be constant)
      void display()const;
      bool inSafeEmpty()const;

      //Setters, Modifiers or Mutators
      // this function is supposed to be called only once after creation of the object
      void init(const char* title, const double values[], int noOfMarks);
      void init();
      void set(const char* title);
      bool add(double mark);
   };

}
void display();
#endif // !SDDS_MARKS_H