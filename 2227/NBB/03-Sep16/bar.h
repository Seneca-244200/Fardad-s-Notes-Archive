#pragma once
#ifndef SDDS_BAR_H_
#define SDDS_BAR_H_
// foo(int a, char b = 'b', double d = 234);

namespace sdds {
   void bar(char CarToFillTheBar='=', 
                           int length = 70);
   void bar(int length);
}
#endif // !SDDS_BAR_H_

