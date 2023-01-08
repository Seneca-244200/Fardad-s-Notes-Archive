#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
namespace sdds {
	struct Customer {
		char m_name[81];
		int m_age;
		bool legalAge() {
			return m_age >= 19;
		}
		const char* getName() {
			return m_name;
		}
		void setName() {
			cin >> m_name;
		}
		void setName(const char* name) {
			strcpy(m_name, name);
		}
		void setAge() {
			cin >> m_age;
		}
		void setAge(int age) {
			m_age = age;
		}
		void introduceYourself() {
			cout << "Hello, my name is " << m_name << " and I am " << m_age << " years old!" << endl;
		}
	};
}

using namespace sdds;

int main() {
	Customer  D;
	D.setName("Fred");
	D.setAge(18);
	if (D.legalAge()) {
		cout << "What would you like to drink?" << endl;
	}
	else {
		cout << D.getName() << " get out of here..." << endl;
	}
	return 0;
}