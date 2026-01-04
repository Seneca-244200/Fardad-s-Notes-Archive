class Base {
   int m_val{};
public:
   Base(int val) :m_val(val) {};

};

class Derived : public  Base {
   char m_ch{};
public:
   Derived(char ch) :Base(100), m_ch(ch) {};
   Derived(int val, char ch) : Base(val), m_ch{ ch } {}
};

void foo() {
   Derived D = 'A';
   Derived D('A');
   Derived D{ 'A' };
   Derived D = { 'A' };

   Derived D1{ 200, 'X' };

}