class Menu {
public:
   Menu() {
   };
   void operator=(const Menu&) = delete;
};

int main() {
   Menu M;
   Menu N;

   N = M; // cause an error
   return 0;
}