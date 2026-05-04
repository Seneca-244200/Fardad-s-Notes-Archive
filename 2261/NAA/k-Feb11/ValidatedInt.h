#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
#include <iostream>
// using namespace std; // I am not allowed to do this in a header file
namespace seneca {
   class ValidatedInt { // is a struct that has everything as private by default
   private:
      // attributes: hold specs
      int m_value = 0;
      int m_minValue{};
      int m_maxValue{};
      char m_title[51]="Integer Number";  // Dynamic C-string for the m_title
      ValidatedInt& initialize(const char* titleParam, int val, int minv, int maxv);
     
   public:
      // Constructors: called by the system at the moment of creation
      ValidatedInt() = default; // asking compiler to create an empty no arg constructor
      ValidatedInt(const char* titleParam);
      ValidatedInt(const char* titleParam, int val, int minv, int maxv);
      ~ValidatedInt() = default; // destructor
      ValidatedInt& operator=(int newVal);
      ValidatedInt& operator=(const ValidatedInt& other);
      int get()const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      ValidatedInt& operator+=( int amount);
      ValidatedInt& operator-=(int amount);
      ValidatedInt operator+(const ValidatedInt& other)const;
      ValidatedInt& operator++();// prefix
      ValidatedInt operator++(int);// postfix because of int flag
   /*   operator int()const;*/
      operator const char*()const;
      int operator[](size_t index)const;
      friend int operator-(int lo, const ValidatedInt& ro);
   };
   std::ostream& operator<<(std::ostream& ostr, const ValidatedInt& right);
   std::istream& operator>>(std::istream& istr, ValidatedInt& right);


   int operator+=(int& leftOperand, const ValidatedInt& rightOpertand);
   int operator-(int leftOperand, const ValidatedInt& rightOpertand);
   // don't do the following if the operator- could be a member of
   // vi;
   int operator-(const ValidatedInt & vi);
}
#endif // !SENECA_VALIDATEDINT_H

