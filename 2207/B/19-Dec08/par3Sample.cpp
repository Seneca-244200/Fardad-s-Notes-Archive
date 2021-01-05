class Employee {
   char* m_name{};
public:
   ....
}

/*
A) Create an operator= overload to assign an employee to another employee with cascading
effect;

inside class:
Employee& operator=(Employee&);

outside class:
Employee& Employee::operator=(Employee& E){
   if(this != &E){
      delete[] m_name;
      m_name = new char[strlen(E.m_name) + 1);
      strcpy(m_name, E.m_name);
   }
   return *this;
}






*/