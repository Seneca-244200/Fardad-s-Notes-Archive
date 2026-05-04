#ifndef SENECA_VALIDATED_H
#define SENECA_VALIDATED_H
namespace seneca {
// struct ValidatedInt {// is a class that has everything as public by default
   class ValidatedInt { // is a struct that has everything as private by default
   private:
      // attributes: hold specs
      int m_value;
      int m_minValue;
      int m_maxValue;
      char m_title[21];  
      void initialize(const char* titleParam, int val, int minv, int maxv);
   public:
      // Constructors: called by the system at the moment of creation
      ValidatedInt(const char* titleParam = "Integer Number");
      ValidatedInt(const char* titleParam, int val, int minv, int maxv);
      ~ValidatedInt() = default;
      // methods: do things uisng the specs
      ValidatedInt& setValue( int newVal);
      int getValue()const; // (Only C++)I can not change my owner
                           // getValue method, cannot change the attribute
      const ValidatedInt& display()const; // I can not change my owner
      ValidatedInt& add(int amount);
      ValidatedInt& operator+=(int amount);
      ValidatedInt& operator-=(int amount);
      ValidatedInt operator- (int amount)const;
      ValidatedInt& operator++(); // prefix
      ValidatedInt operator++(int); // postfix, the int is just flag to indicate postfix
      operator int()const;
      int operator[](size_t index)const;

   };

}
#endif 
