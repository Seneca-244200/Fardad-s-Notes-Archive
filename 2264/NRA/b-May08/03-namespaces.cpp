#include <iostream>
using namespace std;
// hr
namespace hr {
	struct Salary {
		double amount;
	};
	struct Student {
		char name[21];
		unsigned id;
		Salary salary;
	};
}
// edu
namespace edu {
	struct Subject {
		char name[31];
		char section[3];
	};
	struct Student {
		char name[21];
		unsigned id;
		Subject subjects[5];
	};
}


using namespace edu;
int main(){
	hr::Student S;
	Student aS;
	
	return 0;
}