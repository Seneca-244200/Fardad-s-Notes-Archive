#include <iostream>
#include "SDDS_Debug.h"
namespace sdds {
   SDDS_Debug debug;
   SDDS_Debug::SDDS_Debug() {
      the_buf = std::cerr.rdbuf(); // holding the underlaying buffer for reconnection
   }
   void SDDS_Debug::deactivate() { // mute cerr by disconnecting the underlaying buffer
      std::cerr.rdbuf(nullptr);
   }
   void SDDS_Debug::activate() {  // unmute cerr by reconnecting the underlaying buffer
      std::cerr.rdbuf(the_buf);
   }
}
