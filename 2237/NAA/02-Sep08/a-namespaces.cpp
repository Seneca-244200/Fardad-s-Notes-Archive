#include <iostream>
using namespace std;
// HR
namespace hr {
	struct Teacher {
		char m_name[41];
		char m_lastName[51];
		int m_years;
		double m_salary;
	};
	struct Admin {
		int whatever;
	};
}
namespace edu {
	struct Teacher {
		char m_subjects[4][81];
		int m_semesters[3];
	};
	struct Student {
		int whatever;
	};
}

// if this program is writte by the EDU departement
using namespace edu;
using namespace hr;
int main( ) {
	Admin a;
	Student S;
	hr::Teacher hT;
	edu::Teacher eT;

   return 0;
}