#ifndef SDDS_COFFEE_H_
#define SDDS_COFFEE_H_
namespace sdds {
   struct Coffee {
      char m_beanType[21];
      int m_strength;           // 1 to 3 for mild medium strong
   };
   void brew(Coffee* cf, int strength);
   void display(const Coffee* cf);
}
#endif // !SDDS_COFFEE_H_
