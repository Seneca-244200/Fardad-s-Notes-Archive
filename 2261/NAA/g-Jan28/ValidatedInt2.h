#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
namespace seneca {
   class ValidatedInt{
   private:
      int m_value;
      int m_minValue;
      int m_maxValue;  
   public:
      void initialize(int val, int minv, int maxv);
      void setValue( int newVal);
      int getValue()const;
      void display()const;
      void addToValue( int amount);
      void reduceValue(int amount);

   };

}
#endif // !SENECA_VALIDATEDINT_H

