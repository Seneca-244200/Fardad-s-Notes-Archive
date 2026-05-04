#ifndef SENECA_VALIDATEDINT_H
#define SENECA_VALIDATEDINT_H
namespace seneca {
   class ValidatedInt { // is a struct that has everything as private by default
   private:
      // attributes: hold specs
      int m_value{};
      int m_minValue{};
      int m_maxValue{};
      char m_title[51]{};  // Dynamic C-string for the m_title
      ValidatedInt& initialize(const char* titleParam, int val, int minv, int maxv);
     
   public:
      // Constructors: called by the system at the moment of creation
      ValidatedInt(const char* titleParam = "Integer Number");
      ValidatedInt(const char* titleParam, int val, int minv, int maxv);
      ~ValidatedInt() = default; // destructor
      ValidatedInt& operator=(int newVal);
      ValidatedInt& operator=(const ValidatedInt& other);
      int get()const;
      void display()const;
      ValidatedInt& operator+=( int amount);
      ValidatedInt& operator-=(int amount);
      ValidatedInt operator+(const ValidatedInt& other)const;
      ValidatedInt operator-()const;
      ValidatedInt& operator++();// prefix
      ValidatedInt operator++(int);// postfix because of int flag
      operator int()const;
      operator const char*()const;
      int operator[](size_t index)const;
   };

}
#endif // !SENECA_VALIDATEDINT_H

