#include <iostream>
#include "Container.h"
#include "bbl_sort.h"
using namespace std;
using namespace seneca;

int main() {
   double vals[] = { 10.1, 5.5, 20.3, 50.4, 1.1 };
   int ivals[] = { 10, 5.5, 20, 50, 1 };
   Container cvals[] = { 10, 5.5, 20, 50, 1 };
   bbl_sort(vals, 5);
   prn_csv(vals, 5);
   bbl_sort(vals, 5, false);
   prn_csv(vals, 5);
   bbl_sort(ivals, 5);
   prn_csv(ivals, 5);
   bbl_sort(cvals, 5);
   prn_csv(cvals, 5);
   return 0;
}