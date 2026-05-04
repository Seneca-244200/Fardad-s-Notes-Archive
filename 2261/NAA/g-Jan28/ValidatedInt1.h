#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
namespace seneca {
   struct ValidatedInt{
      int m_value;
      int m_minValue;
      int m_maxValue;
   };
   void initialize(ValidatedInt& vi, int val, int minv, int maxv);
   void setValue(ValidatedInt& vi, int newVal);
   int getValue(const ValidatedInt& vi);
   void display(const ValidatedInt& vi);
   void addToValue(ValidatedInt& vi, int amount);
   void reduceValue(ValidatedInt& vi, int amount);
}
#endif // !SENECA_VALIDATEDINT_H

