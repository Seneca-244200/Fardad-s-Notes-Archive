#ifndef SDDS_DEBUG_H
#define SDDS_DEBUG_H
#include <iostream>
// to disconnect the underlaying buffer in cerr
// like this we can "Mute" cerr not to show messages.
namespace sdds {
   class SDDS_Debug {
      std::streambuf* the_buf;
   public:
      SDDS_Debug();
      void deactivate();
      void activate();
   };
   extern SDDS_Debug debug; // makes it global to all files including "SDDS_Debug.h"
}
#endif // 


