#include "Displayable.h"
namespace ict{
  std::ostream& operator<<(std::ostream& os, const Displayable& D){
    return D.display(os);
  }
}