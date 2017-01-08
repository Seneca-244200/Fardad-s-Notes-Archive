#pragma once
#ifndef ICT_CONTAINER_H__
#define ICT_CONTAINER_H__
struct Container {
private:
   char content_[31];
   int amount_;
   int capacity;
public:
   Container();
   Container(int capacity);
   Container(const char* content, int capacity);
   Container(const Container &ToCopy);
   ~Container();

   bool invalid()const;
   void set(const char* content
            , int capacity, int amount = 0);
   void empty();
   void add(int amountAdded);
   int remove(int amount);
   void display()const;
   Container returnMe();
};


#endif
