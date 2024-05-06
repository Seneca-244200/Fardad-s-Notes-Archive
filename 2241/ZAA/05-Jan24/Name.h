#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
   size_t counter{ };
   class Name {
      char* m_name;
      char* m_surname;
      /// <summary>
   /// deallocates the memory used by Name object
   /// </summary>
   /// <param name="n"> The Name object</param>
      void deallocate( );
      /// <summary>
      /// sets the attributes of name to nullptr
      /// </summary>
      void setEmpty( );

   public:
      Name( ); // constructs the object right after it is born
      ~Name( ); // destructs the object right before it is gone

   /// <summary>
   /// sets the name and surname dynamically in the Name object
   /// </summary>
   /// <param name="name"> cstring fist name </param>
   /// <param name="surname"> cstring last name </param>
      void set( const char* name, const char* surname );
   /// <summary>
   /// set a name by getting them from console from user.
   /// </summary>
      void read( );
   /// <summary>
   /// returns true if the name is empty
   /// </summary>
   /// <returns> true if name is empty </returns>
      bool isEmpty( ) const;
   /// <summary>
   /// Print a name or prints "No Name" if empty
   /// </summary>
      void print( )const;
   };

}
#endif // !SENECA_NAME_H


