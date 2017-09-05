namespace Acc{
  struct Payment{
    int year;
    int mon;
    int day;
    double value;
  };
  struct Benefits{
    char name[41];
    Payment value;
  };
}
namespace Hr{
  struct JobLevel{
    int level;
    char title[41];
  };
  struct Employee{
    char name[41];
    int empno;
    char education[1024];
  };

}

namespace Acc{
  struct Employee{
    char name[41];
    int empno;
    int noOfchild;
    double salary;
    struct Benefits B;
  };
};


struct Employee{
  char name[41];
  int empno;
  int noOfchild;
  double salary;
  struct Benefits B;
};

using namespace Acc;

int main(){
  struct Employee ae;
  struct Hr::Employee he;
  return 0;
}

