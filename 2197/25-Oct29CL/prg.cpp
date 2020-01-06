class Bottle {
   char* m_content;
   float m_volume;
   int m_capaciy;
public:
   Bottle() {
      m_capaciy = 250;
      m_volume = 0;
      m_content = nullptr;
   }
   Bottle(const char* content, float volume, int capacity = 250) {
      m_content = new char[strlen(content) + 1];
      strcpy(m_content,content);
      m_volume = volume;
      m_capaciy = capacity;
   }
};

int main() {
   float x;
   Bottle a;
   Bottle b("Milk", 200);
   Bottle c("Apple juice", 100); 
   Bottle d("Milk", 250, 500);
   Bottle e("coke", 750,400);

   x = d += 200; // x is zero
   x = c += 200; // x is 50.0
   a = d += b;
   a = d += b;
   a = c += e;

   return 0;
}