#include <iostream>
#include <cstring>
using namespace std;
#include "Container.h"
void Container::init(const char* content, int capacity) {
   strcpy(content_, content);
   capacity_ = capacity;
   amount_ = 0;
}
void Container::empty() {
   content_[0] = 0;
   amount_ = 0;
}
void Container::add(int amount) {
   if (amount_ + amount <= capacity_) {
      amount_ += amount;
   }
   else {
      amount_ = capacity_;
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
   cout << content_ << "-Container has " << amount_ << " " << content_ << " in it." << endl;
}