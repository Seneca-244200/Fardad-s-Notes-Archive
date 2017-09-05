class Employee {
   char* name_;
   int empno_;
   double salary_;
public:
   Employee();
   Employee(const char name[],
            int eno = 123456,
            double sal = 35000.);
   void print()const;
   void read();
   void set(double sal);
   void set(int empno);
   const char* getName()const;
   ~Employee();
};