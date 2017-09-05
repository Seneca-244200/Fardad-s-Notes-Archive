#ifndef SICT_GUESTLIST_H_
#define SICT_GUESTLIST_H_

#include "Name.h"
namespace sict{
  class GuestList{
    Name _partyName;
    Name* _guests;
    int _nog;
  public:
    GuestList();
    GuestList(const char* partyName, int minNoOfGuests);
    GuestList(const GuestList& G);
    ~GuestList();
    GuestList& operator=(const GuestList& GL);
    void read();
    void display();
  };
}

#endif
