#include <cstdio>
using namespace std;
namespace edu {
	struct Student {
		unsigned id;
		float gpa;


	};
}


namespace hr {
	struct Student {
		unsigned id;
		double salary;
	};
}

namespace edu {
	struct Subject {
		char name[21];
	};
}
namespace hr {
	struct Job {
		char title[41];
	};
}
using namespace edu;
using namespace hr;
int main() {
	printf("%s \n", "OOP244 NAA - May08");
	edu::Student S; // this is an edu stduent
	hr::Student H;
	Job J;
	Subject sb;


	return 0;
}