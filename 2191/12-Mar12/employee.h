class Employee {
  char* name;
  long empno;
  double salary;
public:
  Employee();
  Employee(const char* name, long empno = 123456, double salary = 35000.00);
  void prn(void);
  void set(void);
  void set(double salary);
  void set(long empno);
  const char* getname(void)const;

};