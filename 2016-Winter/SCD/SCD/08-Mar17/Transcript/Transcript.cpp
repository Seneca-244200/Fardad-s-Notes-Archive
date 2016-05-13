#include "Transcript.h"
#include <iostream>

namespace sict{

  std::ostream& operator<<(std::ostream& os, const Transcript& T){
    return T.display(os);
  }
}