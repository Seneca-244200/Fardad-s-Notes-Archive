#ifndef SENECA_SUBJECT_H
#define SENECA_SUBJECT_H
namespace seneca {
   struct Subject {
      int m_code;
      int m_sem;
      void print( )const;
      void set( int code, int sem );

   };
//   void print( const Subject* sptr );
//   void set( Subject* sptr, int code, int sem );


}
#endif
