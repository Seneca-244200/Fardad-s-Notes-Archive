struct Student {

};
struct Subject {

};

void takeSubject(struct Student s, struct Subject sb);



class Student {

   void takeSubject(class Subject& S);
};

void foo(int a = 10) {
   cout << a << endl;
}


int main() {
   int i = 15;  // initialization
   int j;       // first garbage
   j = 15;      // garbage is overwritten by 15

   foo(20);
   foo();

   Student S;
   Subject sb;
  S.takeSubject(sb);


   return 0;
}