#ifndef SDDS_LINE_H_
#define SDDS_LINE_H_
namespace sdds {
   //   void line( char characterToFillTheLineWith, int noOfCharacters );
   
   /// <summary>
   /// Draws a horizontal line on the screen and print a new line
   /// </summary>
   /// <param name="fill"> character to draw the line with</param>
   /// <param name="length">The length of the line</param>
   void line( char fill = '-', int length = 79 );  // line_char_int

 //  void line( char fill );             // line_char

   void line( int length );            // line_int

 //  void line( );                       // line
}
#endif // !SDDS_LINE_H
/*

----------------------------------------------------------

*/