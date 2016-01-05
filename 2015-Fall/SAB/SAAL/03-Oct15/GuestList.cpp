#include <cstring>
#include "GuestList.h"
using namespace std;
namespace sict{
  GuestList::GuestList(){
    _guests = (Name*)0;
    _nog = 0;
  }
  GuestList::GuestList(const char* partyName, int minNoOfGuests){
    _partyName = partyName;
    _guests = new Name[minNoOfGuests];
    _nog = minNoOfGuests;
  }
  GuestList::~GuestList(){
    delete[] _guests;
  }
  void GuestList::read(){
    cout << "Event Name: ";
    _partyName.read();
    cout << "Party guest names: " << endl;
    for (int i = 0; i < _nog; i++){
      cout << (i + 1) << ": ";
      _guests[i].read();
    }
  }
  GuestList::GuestList(const GuestList& GL){
    _partyName = GL._partyName;
    _guests = new Name[GL._nog];
    _nog = GL._nog;
    for (int i = 0; i < _nog; i++){
      _guests[i] = GL._guests[i];
    }
  }
  GuestList& GuestList::operator=(const GuestList& GL){
    if (this != &GL){ // prevents self setting
      delete[] _guests;
      _partyName = GL._partyName;
      _guests = new Name[GL._nog];
      _nog = GL._nog;
      for (int i = 0; i < _nog; i++){
        _guests[i] = GL._guests[i];
      }
    }
    return *this;
  }
  void GuestList::display(){
    if (_guests != (Name*)0){
      _partyName.display();
      cout << endl << "-----------------------" << endl
       << "Guests: " << endl;
      for (int i = 0; i < _nog; i++){
        cout << (i + 1) << ": ";
        _guests[i].display();
        cout << endl;
      }
      cout << "------------------------------------------" << endl;
    }
  }
}