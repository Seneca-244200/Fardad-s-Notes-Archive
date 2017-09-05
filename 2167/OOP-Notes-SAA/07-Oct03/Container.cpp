#include <iostream>
#include <cstring>
using namespace std;
#include "Container.h"
Container::Container() {
   content_[0] = 0;
   amount_ = -1;
   capacity = -1;
   cout << "defaulting container" << endl;
}
Container::Container(int capacity) {
   //Container("Water", capacity);
   // WRONG YOU CAN'T DO THIS. THIS WILL CREATE A TEMP NAMELESS
   // OBJECT OF TYPE CONTAINER AND DIES RIGHT AT THE END OF LINE

   set("Water", capacity);
   cout << "Building " << content_ << " " << this->capacity << " container." << endl;
}
Container::Container(const char* content, int capacity) {
   set(content, capacity);
   cout << "Building " << content_ << " " << this->capacity << " container." << endl;
}
Container::Container(const Container &C) {
   strcpy(content_, C.content_);
   capacity = C.capacity;
   amount_ = C.amount_ - 1;
}
Container::~Container() {
   cout << "Killing "; 
   display();
}
Container Container::returnMe() {
   return *this;
}
bool Container::invalid()const {
   return amount_ == -1 || capacity == -1 || content_[0] == 0;
}
void Container::set(const char* content, int capacity, int amount) {
   strcpy(content_, content);
   this->capacity = capacity;
   amount_ = amount;
}
void Container::empty() {
   amount_ = 0;
}
void Container::add(int amount) {
   if (amount_ + amount <= capacity) {
      amount_ += amount;
   }
   else {
      amount_ = capacity;
   }
}
int Container::remove(int amount) {
   int ret = amount;
   if (amount < amount_) {
      amount_ -= amount;
   }
   else {
      ret = amount_;
      amount_ = 0;
   }
   return ret;
}
void Container::display()const {
   if (invalid()) {
      cout << "Invalid container" << endl;
   }
   else {
      cout << content_ << " - " << capacity <<" Container has " << amount_ << " " << content_ << " in it." << endl;
   }
}