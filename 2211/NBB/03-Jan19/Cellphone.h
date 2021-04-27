#ifndef SDDS_CELLPHONE_H_
#define SDDS_CELLPHONE_H_

namespace sdds {
   struct Cellphone {
      bool m_isSmart;
      char m_brand[21];
      char m_model[16];
   };
   void displayCellphone(const Cellphone* cph);
   void setCellphone(Cellphone* cph, const char* brand, const char* model, bool isSmart);
}
#endif // !SDDS_CELLPHONE_H_
