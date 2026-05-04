#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
namespace seneca {
   class ValidatedInt{
   private:
      int m_value;
      int m_minValue;
      int m_maxValue;  
      void initialize(int val, int minv, int maxv);
   public:
      ValidatedInt();
      ValidatedInt(int minv, int maxv);
      ValidatedInt(int val, int minv, int maxv);
      void setValue( int newVal);
      int getValue()const;
      void display()const;
      void addToValue( int amount);
      void reduceValue(int amount);

   };

}
#endif // !SENECA_VALIDATEDINT_H

