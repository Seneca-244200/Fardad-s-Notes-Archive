#include <iostream>
#include <iomanip>
using namespace std;
template <typename type>
void getnum(type& value, std::istream& istr = std::cin) {
   bool badEntry;
   char nextChar;
   do {
      badEntry = false;
      istr >> value;
      if (istr.fail()) {
         std::cout << "Bad number, try again: ";
         istr.clear();
         istr.ignore(3000, '\n');
         badEntry = true;
      }
      else {
         nextChar = istr.get();
         if (nextChar != '\n') {
            std::cout << "Only enter valid number, try again: ";
            istr.ignore(3000, '\n');
            badEntry = true;
         }
      }
   } while (badEntry);
}
template <typename type>
void getnum(type& val, type min, type max, const char* prompt, std::istream& istr = std::cin) {
   std::cout << prompt;
   getnum(val, istr);
   while (val < min || val > max) {
      std::cout << "Invalid value enterd, retry[" << min << " <= value <= " << max << "]: ";
      getnum(val, istr);
   }
}

int strlen(const char* str) {
   int len = 0;
   while (str[len])len++;
   return len;
}
char* strcpy(char* des, const char* src) {
   int i = 0;
   while (src[i]) {
      des[i] = src[i];
      i++;
   }
   des[i] = 0;
   return des;
}
class Employee {
   char* m_name{};
   long m_empno;
   void setname(const char* name);
public:
   Employee(const Employee&);
   Employee& operator=(const Employee&);
   Employee();
   Employee(const char* name, long empno);
   virtual std::istream& read(std::istream& istr = std::cin);
   virtual std::ostream& write(std::ostream& ostr = std::cout)const;
   virtual ~Employee();
};
std::ostream& operator<< (std::ostream& ostr, const Employee& E);
std::istream& operator>>(std::istream& istr, Employee& E);
void Employee::setname(const char* name) {
   delete[] m_name;
   m_name = new char[strlen(name) + 1];
   strcpy(m_name, name);
}
Employee::Employee(const char* name, long empno) :m_empno(empno) {
   setname(name);
}
Employee::Employee(const Employee& E) {
   operator=(E);
}
Employee& Employee::operator=(const Employee& Roper) {
   setname(Roper.m_name);
   m_empno = Roper.m_empno;
   return *this;
}
Employee::Employee() :m_empno(-1) {
   setname("");
}
Employee::~Employee() {
   delete[] m_name;
}
istream& Employee::read(istream& istr) {
   char name[26] = "";
   cout << "Name: ";
   istr.get(name, 26, '\n');
   istr.ignore(1000, '\n');
   setname(name);
   getnum(m_empno, 10000L, 99999L, "Enter Employee number: ", istr);
   return istr;
}

ostream& Employee::write(ostream& ostr)const {
   return ostr << setw(25) << left << setfill('.') << m_name << " (" << m_empno << ")";
}
// helpers
ostream& operator<< (ostream& ostr, const Employee& E) {
   return E.write(ostr);
}
istream& operator>>(istream& istr, Employee& E) {
   return E.read(istr);
}
void getEmployee(Employee& emp) {
   cout << "Enter employee info: " << endl;
   cin >> emp;
}

Employee getEmployee() {
   Employee emp;
   cout << "Enter employee info: " << endl;
   cin >> emp;
   return emp;
}
void print(const Employee E) {
   cout << "The employee info:" << endl
      << E << endl;
}

int main() {
   Employee A("Fred", 12345);
   print(A);
   ....

   return 0;
}

/*

print(A);

Question:
A) Trace the code path of the above line step by step 
until it reaches the end of its process. Use line numbers 
to indicate each step and describe each step briefly.
B) what is the exact output
C) What is the state of object A after the line
D) Add the code needed after print to prompt the user
to enter employee information and store it in the "A" object
without any copy constructor being called.


Answer:
A)
A)
125: func call print, passing A by value.
119: copy const call for E
75: operator= call passing ref A
78: setname call passing "Fred" Cstring
67: deleting nullptr in m_name
68: DMA len of "Fred" + 1 pointed by m_name
69: copying "Fred" into m_name
70: exit setname
79: copying 12345 into m_empno
80: return *this by ref (exit operator=)
76: exit copy const
120: print "The Employee info: " & newline
121: call operator<<(ostream cout, Employee E)
103: call write of E passing cout
99: print "Fred..................... (12345)"
99: return cout (exit operator<<)
121: print newline
122: destructor of E is called
86: free the memory of m_name in E
87: exit destructor
122: exit print

B)
The Employee info:
Fred..................... (12345)

C)
m_name DMA holding Fred
m_emplo holding 12345

D)
either:
cout << "Enter Employee info:" << endl;
cin >> A;
OR:
getEmployee(A);

*/
