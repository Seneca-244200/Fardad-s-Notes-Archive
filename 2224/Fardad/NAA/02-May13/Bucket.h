#ifndef SDDS_BUCKET_H // compilation safegaurds
#define SDDS_BUCKET_H

struct Bucket {
   int m_capacity;
   int m_content;
};


void setBucket(int capacity, int content);
void fillBucket(int content);
int emptyBucket(int content);
void displayBucket();


#endif // !SDDS_BUCKET_H







