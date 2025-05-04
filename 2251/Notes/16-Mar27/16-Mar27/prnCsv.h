#ifndef SENECA_PRNCSV_H
#define SENECA_PRNCSV_H
#include <iostream>
#include "Container.h"
//using namespace std; <<<---- you should never USE a namespace in a header file
namespace seneca {


   /// <summary>
   /// prints an array in comma seperated values format. T must be insertable into ostream
   /// </summary>
   /// <typeparam name="type"></typeparam>
   /// <param name="arr"></param>
   /// <param name="size"></param>
   template <class T>
   void prnCsv(const T arr[], int size) {
      for (int i = 0; i < size; i++) {
         if (i != 0) std::cout << ", ";
         std::cout << arr[i];
      }
      std::cout << std::endl;
   }


/// <summary>
/// prints an array of Containers in comma seperated values format. T must be insertable into ostream
/// </summary>
/// <typeparam name="type"></typeparam>
/// <param name="arr"></param>
/// <param name="size"></param>
   template <>
   void prnCsv<Container>(const Container arr[], int size) {
      for (int i = 0; i < size; i++) {
         if (i != 0) std::cout << ", ";
         arr[i].display(std::cout);
      }
      std::cout << std::endl;
   }


}


#endif // !SENECA_PRNCSV_H
