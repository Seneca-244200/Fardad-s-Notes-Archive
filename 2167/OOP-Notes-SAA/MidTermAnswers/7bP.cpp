// 15 marks
class Student {  //1
   char* name_;      // 3
   int stdno_;       //
   double loan_;   //
public:
   Student();  // 1
   Student(const char name[], //2
            int stno = 142246901,
            double loan = 12000.);
   void print()const;   //2
   void read();  //1
   void set(double loan);  //1
   void set(int stdno);  //1
   const char* getName()const;// 2
   ~Student(); //1
};