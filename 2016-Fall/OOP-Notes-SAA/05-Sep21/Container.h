#pragma once
#ifndef ICT_CONTAINER_H__
#define ICT_CONTAINER_H__
struct Container {
private:
   char content_[31];
   int amount_;
   int capacity_;
public:
   void init(const char* content, int capacity);
   void empty();
   void add(int amountAdded);
   int remove(int amount);
   void display();
};


#endif
