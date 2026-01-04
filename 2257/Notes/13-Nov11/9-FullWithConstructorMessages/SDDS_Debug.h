#ifndef SENECA_DEBUG_H
#define SENECA_DEBUG_H
#include <iostream>
// to disconnect the underlaying buffer in cerr
// like this we can "Mute" cerr not to show messages.
namespace seneca {
   class SENECA_Debug {
      std::streambuf* the_buf;
   public:
      SENECA_Debug();
      void deactivate();
      void activate();
   };
   extern SENECA_Debug debug; // makes it global to all files including "SENECA_Debug.h"
}
#endif // 


