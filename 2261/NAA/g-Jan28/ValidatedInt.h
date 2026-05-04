#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
namespace seneca {
   class ValidatedInt { // is a struct that has everything as private by default
   private:
      // attributes: hold specs
      int m_value;
      int m_minValue;
      int m_maxValue;
      char* m_title;  // Dynamic C-string for the m_title
      void initialize(const char* titleParam, int val, int minv, int maxv);
      void release();  // Function to release dynamic memory when not needed
   public:
      // Constructors: called by the system at the moment of creation
      ValidatedInt(const char* titleParam = "Integer Number");
      ValidatedInt(const char* titleParam, int val, int minv, int maxv);
      ~ValidatedInt(); // destructor
      void setValue( int newVal);
      int getValue()const;
      void display()const;
      void addToValue( int amount);
      void reduceValue(int amount);
   };

}
#endif // !SENECA_VALIDATEDINT_H

