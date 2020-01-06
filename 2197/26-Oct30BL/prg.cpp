class Bottle {
   char* m_content;
   float m_volume;
   int m_capacity;
   Bottle() {
      //either this
      m_content = new char[1];
      m_content[0] = '\0';
      // or this
      m_content = nullptr;
      // end either
      m_volume = 0;
      m_capacity = 250;
   }
   Bottle(const char* content, float volume, int capacity=250) {
      m_content = new char[strlen(content) + 1];
      strcpy(m_content, content);
      m_capacity = capacity;
      m_volume = volume > capacity ? capacity : volume;
     /* if (volume > capacity) {
         m_volume = capacity;
      }
      else {
         m_volume = volume;
      }*/
   }
   Bottle(const Bottle& cp) {
      m_content = nullptr;
      if (cp.m_content) {
         m_content = new char[strlen(cp.m_content) + 1];
         strcpy(m_content, cp.m_content);
      }
      m_capacity = cp.m_capacity;
      m_volume = cp.m_volume;
   }
   ~Bottle() {
      delete[] m_content;
   }

   Bottle operator+=(const Bottle& RO){
	   Bottle overflow;
	   if(strcmp(m_content,RO.m_content) == 0){ // they are the same

	   }
	   return overflow
   }

   float operator+=(float value) {
      float overflow = 0;
      m_volume += value;
      if (m_volume > m_capacity) {
         overflow = m_volume - m_capacity;
         m_volume = m_capacity;
      }
      return overflow;
   }
};

int main() {
   float overflow;
   Bottle b;
   Bottle c("Milk", 150); // c is milk 150 CCS in a 250CC  bottle
   Bottle d("Orange Juice", 200, 400);
   Bottle e("Milk", 50);
   Bottle f("Milk", 100, 150);
 //  overflow = c += 50; // c will have 200 CCs and overflow is zero
 //  overflow = d += 250; // d will have 400 CCs and overflow is 50
   d = c += e; // c is 200 CCs and d is empty
   d = c += f; // c is 250 CCs and d is 50CCs

   return 0;
}