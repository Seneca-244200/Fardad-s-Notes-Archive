#ifndef SENECA_ASSESSMENT_H
#define SENECA_ASSESSMENT_H
namespace seneca {
   class Assessment {
  // private: //is by default
      char* m_title; 
      int m_mark;
   public:
      Assessment( );
      Assessment( const char* title );
      Assessment( const char* title, int mark );
      ~Assessment( );
      bool isEmpty( )const;
      void set( );
      void set(const char*title, int mark );
      void print()const;
   };



}
#endif // !SENECA_ASSESSMENT_H


