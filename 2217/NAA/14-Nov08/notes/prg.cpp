#include <iostream>
using namespace std;
class Human {

public:
   // pure virtual method
   // makes the class an abstract
   virtual void greet() = 0; // I don't know yet
   virtual ~Human() {
   }
};
class Chinees:public Human {
public:
   void greet() {
      cout << "Neehaw" << endl;
   }
};
class Persian:public Human {
public:
   void greet() {
      cout << "Dorood" << endl;
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
   Human* ptr[11]{ new Chinees(), new Persian(), new English()
      , new Gujarati()
      , new Spanish()
      , new French()
      , new Hindi()
      , new Russian()
      , new Arabic()
      , new Somali()
      , new Punjabi()
   };
   for (int i = 0; i < 11; i++) {
      ptr[i]->greet();
   }

   for (int i = 0; i < 11; i++) {
      delete ptr[i];
   }
}
