#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>

namespace sdds {
    class Name {
        // has a char* value that should be dynamically allocated
        char* m_value{};
    
    public:
        // default constructor
        Name(const char* name = nullptr);
        
        // rule of three, Copy Const, Copy Assignment, Destructor
        Name(const Name& N);
        Name& operator=(const Name& N);
        virtual ~Name();
        
        // query to get the name
        const char* getName() const;

        // display function
        virtual std::ostream& display(std::ostream& ostr = std::cout) const;
        // dynamically read function
        virtual std::istream& read(std::istream& istr = std::cin);
    };

    // A helper function to overload insertion <<
    std::ostream& operator<<(std::ostream& ostr, const Name& N);
    // A helper function to overload extraction >>
    std::istream& operator>>(std::istream& istr, Name& N);
}

#endif