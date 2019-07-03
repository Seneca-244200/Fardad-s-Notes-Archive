class Mark {
  int m_mark;
public:
  Mark();
  Mark(int mark);
  ~Mark();


};
Mark::~Mark() {
  cout << m_mark << " went out of scope!";
}
Mark::Mark() {
  m_mark = -1;
}
/* bad
Mark::Mark(int m_mark) {
  this->m_mark = m_mark; 
}
*/
Mark::Mark(int mark) {
  m_mark = mark;
}
int main() {
  Mark M = 100;
}

// this is the address of the current object and can be used inside methods, constructors
// or destructor of a class;