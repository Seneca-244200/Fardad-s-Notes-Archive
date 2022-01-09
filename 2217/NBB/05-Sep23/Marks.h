#ifndef SDDS_MARKS_H
#define SDDS_MARKS_H
namespace sdds {
   const int MaxNoMarks = 1000;
   class Marks {
      // properties, memeber variables, attributes
      //private:
      char m_title[51];   // "EAC150 Finals"
      double m_values[MaxNoMarks];
      int m_noOfValues;
   public:
      //Getter, Querie, Accessors  must be constant
      void display()const;
      bool inSafeEmpty()const;
      // Setters, Modifiers, Mutators
      // must be called only once after the object is created;
      void init();
      void init(const char* title, const double values[], int NoOfValues);
      void set(const char* title);
      bool add(double mark);
   };
}
#endif // !SDDS_MARKS_H
