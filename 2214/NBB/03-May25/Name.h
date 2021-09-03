#ifndef SDDS_NAME_H
#define SDDS_NAME_H
namespace sdds {
   struct Name {
      char first[31];
      char middle[31];
      char last[31];
      void print();
   };

}
#endif // !SDDS_NAME_H

