#include <iostream>
using namespace std;
class Bicycle {
public:
   Bicycle();
};

class Engine {
public:
   Engine(int power);
};

class Motorcycle :public/*is a */ Bicycle {
/*has an */   Engine m_eng;
public:
   Motorcycle();
};

int main() {

   return 0;
}