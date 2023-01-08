#include <iostream>
using namespace std;
namespace sdds {
	struct Customer {
		char m_name[81];
		int m_age;
		bool legalAge() {
			return m_age >= 19;
		}
		void setName() {
			cin >> m_name;
		}
		void setAge() {
			cin >> m_age;
		}
		void introduceYourself() {
			cout << "Hello, my name is " << m_name << " and I am " << m_age << " years old!" << endl;
		}
	};
}

using namespace sdds;

int main() {
	Customer C;
	cout << "Hello, welcome to Seneca Bar,  what is your name? ";
	C.setName();
	cout << "How old are you ? ";
	C.setAge();
	C.introduceYourself();
	if (C.legalAge()) {
		cout << "What would you like to drink?" << endl;
	}
	else {
		cout << "Get out of here..." << endl;
	}
	return 0;
}