#include <iostream>
#include "SENECA_Debug.h"
namespace seneca {
   SENECA_Debug debug;
   SENECA_Debug::SENECA_Debug() {
      the_buf = std::cerr.rdbuf(); // holding the underlaying buffer for reconnection
   }
   void SENECA_Debug::deactivate() { // mute cerr by disconnecting the underlaying buffer
      std::cerr.rdbuf(nullptr);
   }
   void SENECA_Debug::activate() {  // unmute cerr by reconnecting the underlaying buffer
      std::cerr.rdbuf(the_buf);
   }
}
