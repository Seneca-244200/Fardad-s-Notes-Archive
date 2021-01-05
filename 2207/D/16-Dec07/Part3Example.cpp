class Employee {
   char* m_name;
public:



}

/*
Write a function called setName that dyancamically 
set the m_name a Cstring making sure that the Cstring
actualy points to a string and if not sets the Emplyee
to a safe sate:
(assume all necessary headerfile are included)
change:
char* m_name{};
include:
   #include <cstring>
   using namespace std;
in public sction:
void setName(const char* name){
   delete[] m_name;
   if(name){
      m_name = new char[strlen(name)+1];
      strcpy(m_name, name);
   }
   else{
      m_name = nullptr;
   }
}



*/