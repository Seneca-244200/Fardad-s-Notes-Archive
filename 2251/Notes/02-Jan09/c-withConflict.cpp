
// admin
namespace edu {

	struct  Student {
		double m_gpa;
		double gpa( );
	};




}


// osap 
namespace fin {

	struct  Student {

	};
	double getGpa( edu::Student edustd ) {



	}



}

// osap

namespace fin {
	struct Account {

	};




}


#include <iostream>
#include <cstring>
using namespace std;
using namespace edu;
using namespace fin;
int main( ) {
	edu::Student S; // this is an edu student
	fin::Student fs; // this is a finance student 
	Account A; // this A finance Account 
	return 0;
}