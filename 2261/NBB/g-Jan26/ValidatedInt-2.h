#ifndef SENECA_VALIDATED_H
#define SENECA_VALIDATED_H
namespace seneca {
   struct ValidatedInt {
      // attributes: hold specs
      int value;
      int m_minValue;
      int m_maxValue;
      // methods: do things uisng the specs
      void initialize(int val, int minv, int maxv);
      void setValue( int newVal);
      int getValue()const; // (Only C++)I can not change my owner
                           // getValue method, cannot change the attribute
      void display()const; // I can not change my owner
      void addToValue(int amount);
      void reduceValue(int amount);
   };

}
#endif 
