struct Student {
   char name[23];
   int age;
   int knowledge;
   void study() {
      // Read C++ books
      knowledge++;
   }
};


int main() {
   struct Student Fardad, Matthew;
   Fardad.study();
   Matthew.study();
   return 0;
}
