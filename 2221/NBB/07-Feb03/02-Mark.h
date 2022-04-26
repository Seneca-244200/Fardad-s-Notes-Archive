#ifndef SDDS_MARK_H
#define SDDS_MAEK_H
namespace sdds {
   class Mark {
      char* m_title;
      int m_value;
      int m_max;
      void setSafeEmpty();     
      void setTitle(const char* title);
      void dealloc(); // deallocated memory safely
      void init(); // once at the begeining
      void clearAtEnd(); // once at the end
   public:
      Mark();   // called automatically when Mark is born
      ~Mark(); // called automatiaclly when Mark is just about to die
      bool isSafeEmpty()const;
      bool setMax(int maxValidMarkBalue);
      void display()const;
      int get()const;
      int max()const;
      bool set(int markValue);
      void set(const char* title,
             int value=0, 
             int max = 100);
      void read();
      int percent()const;
   };

}
#endif // !SDDS_MARK_H
