#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
namespace sdds {
   class Mark {
      char* m_title;
      int m_value;
      int m_max;
      void setSafeEmpty();
   public:
      void init(); // at the begeining
      void clearAtEnd();
      bool isSafeEmpty()const;
      bool set(int value);
      bool setMax(int value);
      void display()const;
      int get()const;
      int max()const;
     /* void set(const char* title);
      void set(const char* title, int value, int max = 100);
      void read();

      int get()const;
      int max()const;
      int percent()const;*/
   };


}
#endif // !SDDS_MARK_H
