#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
namespace sdds {
   class Mark {
      char* m_title;  // dynamic
      int m_value;   // 20
      int m_max;  // 25
      void setSafeEmpty();
   public:
      // modifiers
      void initialize(); // runs only once before Mark is used
      void clearAtEnd(); // runs only once after work with mark is done
      void set(int markValue);
      void set(const char* titleOfMark);
      void setMaxValue(int maxValue);
      void set(const char* titleOfMark, int markValue, int maxValueForMark = 100);
      void read();
      
      // queries
      void display()const;
      int max()const;
      int value()const;
      void grade(char* grade)const;
      int percent()const;
   };

}
#endif // !SDDS_MARK_H
