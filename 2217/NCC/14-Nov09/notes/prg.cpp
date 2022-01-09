#include <iostream>
using namespace std;
class Human {

public:
   //pure virtual method, therefore Human is absrtact and an interface
   virtual void greet() = 0; // don't know yet, will know when completed in next levels of inheritance
   virtual ~Human() {
   }
};

class Japanese : public Human {
   void greet() {
      cout << "Konnichiwa" << endl;
   }
};
class Chinees:public Human {
public:
   void greet() {
      cout << "Neehaw" << endl;
   }
};
class Iranian:public Human {  // did not implement the greeting, therefore it is still an abstract
public:
};

class Persian :public Iranian {
public:
   void greet() {
      cout << "Dorood" << endl;
   }
};

class Azeri :public Persian {
public:
   void greet() {
      cout << "Kef Ahval" << endl;
   }
};

class English:public Human {
public:
   void greet() {
      cout << "Hello" << endl;
   }
};
class Punjabi : public Human {
public:
   void greet() {
      cout << "Sat Shri Akal" << endl;
   }
};
class Somali : public Human {
public:
   void greet() {
      cout << "Iska waran" << endl;
   }
};
class Arabic : public Human {
public:
   void greet() {
      cout << "Assalamualaikum" << endl;
   }
};
class Russian : public Human {
public:
   void greet() {
      cout << "Privet" << endl;
   }
};
class Hindi : public Human {
public:
   void greet() {
      cout << "Namaste" << endl;
   }
};
class French : public Human {
public:
   void greet() {
      cout << "Bonjoour" << endl;
   }
};
class Spanish : public Human {
public:
   void greet() {
      cout << "Buenos Dias" << endl;
   }
};
class Gujarati : public Human {
public:
   void greet() {
      cout << "kem cho" << endl;
   }
};


int main() {
   Human* ptr[13]{new Japanese(), new Chinees(), new Azeri(), new Persian(), new English()
      , new Gujarati()
      , new Spanish()
      , new French()
      , new Hindi()
      , new Russian()
      , new Arabic()
      , new Somali()
      , new Punjabi()
   };
   for (int i = 0; i < 13; i++) {
      ptr[i]->greet();
   }

   for (int i = 0; i < 13; i++) {
      delete ptr[i];
   }
}
