#include "Cellphone.h"

using namespace sdds;

int main() {
   Cellphone C;
   setCellphone(&C, "Samsung", "flip phone", false);
   displayCellphone(&C);
   return 0;
}