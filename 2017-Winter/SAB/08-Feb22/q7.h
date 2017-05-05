#ifndef SICT_SUBJECT_H_   // 1 mark
#define SICT_SUBJECT_H_
class Subject {           // 1 mark;
   char* m_title;         // 3 marks;
   char m_code[7];
   int mark;
public:
   Subject();        // 1 mark
   Subject(const char* title, const char* code, int mark = 0); // 4 marks
   void print()const;   // 2 marks
   void read();     // 1 mark
   void mark(int value);   // 1 mark
   int mark()const;   // 2 marks;
   void operator+=(int mark);  // 2 marks
   //or
   void add(int mark);
   const Subject& operator=(const Subject& S);  // 3 marks
   Subject(const Subject& S);   // 3 marks

};



#endif