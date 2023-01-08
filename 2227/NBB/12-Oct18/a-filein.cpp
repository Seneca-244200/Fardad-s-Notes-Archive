#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class Item {
   int m_sku;
   char m_name[128];
   double m_price;
   bool m_taxed;
public:
   ifstream& load(ifstream& file) {
      file >> m_sku;
      file.ignore();
      file.getline(m_name, 128, ',');
      file >> m_price;
      file.ignore();
      file >> m_taxed;
      file.ignore(1000, '\n');
      return file;
   }
   ostream& display(ostream& coutRef = cout) {
      coutRef << m_name << "(" << m_sku << "), ";
      coutRef.setf(ios::fixed);
      coutRef.precision(2);
      coutRef << m_price << ", tax: ";
      coutRef << m_price * 0.13 * m_taxed;
      return coutRef;
   }
};

int main() {
   Item I;
   ifstream items("items.csv");
   /*ifstream items;  // constructor will do this
   items.open("items.csv");*/
   while (!items.fail()) {
      I.load(items);
      if (items.fail()) {
         cout << "Got to end of the file!" << endl;
      }
      else {
         I.display() << endl;
      }
   }
   // items.close(); // destructor will do this
   return 0;
}