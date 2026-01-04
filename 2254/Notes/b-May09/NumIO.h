/*
* 
*  You are never alloced to "use" a namespace in a header file
#ifndef NAMESPACE_HEADERNAME_H
#define NAMESPACE_HEADERNAME_H

   The contents of the header file goes here

#endif
*/


#ifndef SENECA_NUMIO_H   // compilation safeguards
#define SENECA_NUMIO_H
// using namespace std; this is not allowed
namespace seneca {

   // ONLY include if needed

   /// <summary>
   /// Gets a number fom console
   /// </summary>
   /// <returns>returns read numbe</returns>
   int getNum();

   /// <summary>
   /// Gets validated integer
   /// </summary>
   /// <param name="num">pointer to the value read</param>
   /// <param name="min">minimum acceptable value</param>
   /// <param name="max">maximum acceptable value</param>
   /// <returns>true if valid, false if invalid</returns>
   bool getValidatedNum(int* num, int min, int max);
}
#endif // !SENECA_NUMIO_H






