#include <iostream>

namespace hr {
	struct Teacher {
		int m_years;
		double m_salary;
	};
}
namespace edu {
	struct Teacher {
		char m_subjects[4][81];
		int m_semesters[3];
	};
}
namespace hr {
	struct Employee {
		double m_salary;
	};
}
using namespace hr;
using namespace std;

int main() {
	Teacher t1;
	edu::Teacher t2;
	cout << "namespaces" << endl;
	return 0;
}