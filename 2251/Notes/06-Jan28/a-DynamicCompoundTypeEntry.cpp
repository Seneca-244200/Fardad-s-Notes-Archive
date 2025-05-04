#include <iostream>
using namespace std;
struct Book {
   char m_title[31];
   size_t m_isbn;
};

Book* getBook( ) {
   Book* ret = new Book;
   cout << "Enter book title\n> ";
   cin >> ret->m_title;
   cout << "Enter book isbn\n> ";
   cin >> ret->m_isbn;
   return ret;
}

void display( const Book& B ) {
   cout << "Title:" << B.m_title << endl;
   cout << "ISBN: " << B.m_isbn << endl;
}


int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   Book* b;
   b = getBook( );
   display( *b );
   delete b;
   b = nullptr; // no need, but good for a rookie to remember
   return 0;
}