#include "BarChart.h"
using namespace std;
namespace sict{
   BarChart::~BarChart() {
      delete[] m_values;
   }
   BarChart::BarChart(int size) {
      m_values = new int[m_size = size];
      m_values[0] = 0;
   }
   BarChart::BarChart(const int values[], int size) {
      m_values = new int[m_size = size];
      for (int i = 0; i < m_size; m_values[i] = values[i++]);
   }
   BarChart::BarChart(const BarChart& BC) {
      m_values = nullptr;
      operator=(BC);
      //*this = BC;I don't like it, if you do use it!
      //m_values = new int[m_size = BC.m_size];
      //for (int i = 0; i < m_size; m_values[i] = BC.m_values[i++]);
   }
   BarChart& BarChart::operator=(const BarChart& BC) {
      if (this != &BC) {
         delete[] m_values;
         m_values = new int[m_size = BC.m_size];
         for (int i = 0; i < m_size; m_values[i] = BC.m_values[i++]);
      }
      return *this;
   }
   std::ostream& BarChart::display(std::ostream& ostr)const {
      for (int i = 0; i < m_size; i++) {
         ostr << (i + 1) << ":";
         for (int j = 0; j< m_values[i]; j++) {
            ostr.put('=');
         }
         ostr << std::endl;
      }
      return ostr;
   }
   std::istream& BarChart::read(std::istream& istr) {
      for (int i = 0; i < m_size; i++) {
         cout << (i + 1) << "/" << m_size << ": ";
         istr >> m_values[i];
      }
      return istr;
   }


   int BarChart::max()const {
      int maxVal = m_values[0];
      for (int i = 1; i < m_size; i++) {
         if (maxVal < m_values[i]) maxVal = m_values[i];
      }
      return maxVal;
   }
   int BarChart::min()const {
      int minVal = m_values[0];
      for (int i = 1; i < m_size; i++) {
         if (minVal > m_values[i]) minVal = m_values[i];
      }
      return minVal;
   }
   int BarChart::operator+()const {
      return max();
   }
   int BarChart::operator-()const {
      return min();
   }
   int BarChart::average()const {
      int aver = 0;
      for (int i = 0; i < m_size; i++) {
         aver += m_values[i];
      }
      return aver / m_size;
   }
   BarChart::operator int()const {
      return average();
   }
   BarChart& BarChart::merge(const BarChart& BC) {
      // allocate ints to the sum of the two chart values
      int* temp = new int[m_size + BC.m_size];
      int i;
      // set the beginning to the currect values
      for (i = 0; i < m_size; i++) {
         temp[i] = m_values[i];
      }
      // set the rest to the BC's values
      for (; i < m_size + BC.m_size; i++) {
         temp[i] = BC.m_values[i - m_size];
      }
      // update the size to the sum of the two.
      m_size += BC.m_size;
      // delete the old values
      delete[] m_values;
      // set the values to the new ones(pointed by temp)
      m_values = temp;
      return *this;
   }

   BarChart& BarChart::operator+=(const BarChart& BC) {
      return merge(BC);
   }
   BarChart BarChart::operator+(const BarChart& RO)const {
      BarChart Res = *this;
      return Res += RO;
   }
   std::istream& operator >> (std::istream& istr, BarChart& RO) {
      return RO.read(istr);
   }
   std::ostream& operator << (std::ostream& ostr, const BarChart& RightOperand) {
      return RightOperand.display(ostr);
   }

 /*  BarChart operator+(const BarChart& LO, const BarChart& RO) {
      BarChart Res = LO;
      return Res += RO;
   }*/
}