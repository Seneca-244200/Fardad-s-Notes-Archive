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
   clog << "Createing " << *this << endl;
}
Employee::Employee(const Employee& E) {
   operator=(E);
}
Employee& Employee::operator=(const Employee& Roper) {
   setname(Roper.m_name);
   m_empno = Roper.m_empno;
   clog << "Assigned to " << Roper << endl;
   return *this;
}
Employee::Employee() :m_empno(-1) {
   setname("");
   clog << "Defaulting Employee" << endl;
}
Employee::~Employee() {
   clog << "Deleting " << *this << endl;
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
   cout << "The employe info are :" << endl
      << E << endl;
}
int main() {
   Employee A("Fred", 12345);
   print(A);
   return 0;
}

/*

print(E);

Question: Trace the code path of the above line step by step 
until it reaches the end of its process. Use line numbers 
to indicate each step and describe each step briefly.

130: function call
123: A passed by value to E, Copy Constrctr. of E is called 
76: assing oper. called
79: setname called with roper.name Cstring "Fred"
67: m_name is deleted
68: new mem allocated lenght of "Fred" + 1 = 5
//
67 to 68 DMA, for Len of Fred + 1 in m_name
//
69: Fred is copied into m_name
80: m_empno is copied
81: "Assign to is printed
81: operator<<(cout, Roper)
107: Write of Roper is called
103: "Fred......................... (12345)
103: ostr is returned
107: ostr is returned
81: newline is printed
82: returns Roper by ref
76: exit copy const.
124: "The employe info are : " and newline
125: operator << (cout, Roper)
81: operator<<(cout, Roper)
107: Write of Roper is called
103: "Fred......................... (12345)
103: ostr is returned
107: ostr is returned
125: new line is printed
126: destructor of E is called in print
89: "Deleting "
89: operator<<(cout, *this)
107: Write of *this is called
103: "Fred......................... (12345)
81: newline is printed
103: ostr is returned
107: ostr is returned
90: m_name's memeory is freed
130: print ends



*/
