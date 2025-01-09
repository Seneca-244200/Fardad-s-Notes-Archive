namespace edu {
   struct Mark {
      int m_value;
      int m_outof;
   };
   struct Student {
      int m_stno;
      char m_name[41];
      Mark m_gpa;
   };


}


namespace osap {
   struct Loan {
      int m_num;
      double m_balance;
   };
   struct Student {
      int m_sin;
      char m_name[51];
      Loan L;
   };
}
using namespace edu;
using namespace osap;
int main(){
   Mark M;
   Loan L;
   edu::Student S;
   osap::Student O;
   return 0;
}