struct Student {
   private:
     int no;
     char grade[14];
	 
   public:
     void set(int n, const char* g); 
     const char* getGrades() const {
         return grade;
     }
	 void display() const;
 };
