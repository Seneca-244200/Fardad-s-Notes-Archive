#ifndef SENECA_ID_H
#define SENECA_ID_H
namespace seneca {
   class ID {
      char* m_name;
      size_t m_id;
      /// <summary>
      /// Sets the ID to an empty state
      /// </summary>
      void set( );
      void deallocate( );
   public:
      /// <summary>
      /// default or no argument constructor
      /// </summary>
      ID( );
      ID( const char* name, size_t id = 0 );
      ~ID( );

      /// <summary>
      /// Dynaamically copies the name of the ID to the incoming argument.
      /// </summary>
      /// <param name="name">Cstring to copy the name from</param>
      /// <param name="id = 0">if provided sets the id</param>
      ID& set( const char* name ,size_t id = 0 );
      ID& set( size_t id );
      std::ostream& display(std::ostream& ostr = std::cout )const;
      bool isEmpty( )const;
      /// <summary>
      /// sets to a safe empty state
      /// </summary>
      void setEmpty( );

   };

}
#endif // !SENECA_ID_H


