namespace acc{
  struct Car{
    int a;
  };
}
namespace man{
  struct Car{
    char b[23];
  };
}

using namespace man;
void caller(){
  struct acc::Car ac;
  struct Car mc;

}

// any code generated in this course must be under 
namespace sict{

}
// except the main module that is going to be
using namespace sict;

// Header files are NOT allowed to use namespaces;