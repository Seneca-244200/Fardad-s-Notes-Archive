#pragma once
#ifndef ICT_CONTAINER_H__
#define ICT_CONTAINER_H__
struct Container {
   char content_[31];
   int amount_;
   int capacity_;
   void add(int amount);
};


#endif
