#ifndef SENECA_VALIDATED_H
#define SENECA_VALIDATED_H
#include <iostream>
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
      int getValue()const; 
      ValidatedInt& operator+=(int amount);
      ValidatedInt& operator-=(int amount);
      ValidatedInt operator-(int amount)const;

      bool operator==(const ValidatedInt& other)const;

      ValidatedInt operator+(const ValidatedInt& other)const;
      ValidatedInt& operator+=(const ValidatedInt& other);

      ValidatedInt& operator++(); // prefix
      ValidatedInt operator++(int); // postfix, the int is just flag to indicate postfix
      std::ostream& operator~()const;
//      operator int()const;
      int operator[](size_t index)const;
      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const; 
      std::istream& read(std::istream& istr = std::cin);
      // will give access the entire class and it is wrong
      // never use friends and always create a query to give the
      // outsider what it needs and only that and nothing else
      friend int operator-(int left, const ValidatedInt& right);
   };
   // helpers
   int operator+(int left, const ValidatedInt& right);
   int operator-(int left, const ValidatedInt& right);
   // IO helpers
   std::ostream& operator<<(std::ostream& left, const ValidatedInt& right);
   std::istream& operator>>(std::istream& left, ValidatedInt& right);
   // if the following is to be implemented it will called a helper function
   // because it is a function that is not a memenber but it is designed
   // to work with specific classes
   // ValidatedInt multiply(const ValidatedInt& a, const ValidatedInt& b);


}
#endif 
