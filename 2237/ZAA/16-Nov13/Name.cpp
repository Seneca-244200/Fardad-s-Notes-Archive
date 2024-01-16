#include "Name.h"
#include "Utils.h"
namespace sdds {
    Name::Name(const char* value){
       ut.aloCpy(m_value, value);
    }

    Name::Name(const Name& N){
       ut.aloCpy(m_value, N.m_value);
    }

    Name& Name::operator=(const Name& N){
       if (this != &N) {
          ut.reAloCpy(m_value, N.m_value);// reallocate deletes first
       }
       return *this;
    }

    Name::~Name() {
       delete[] m_value;
    }

    std::ostream& Name::write(std::ostream& ostr) const{
       return ostr << (m_value ? m_value : "No Name");
    }

    std::ostream& operator<<(std::ostream& leftOstream, const Name& rightName){
       return rightName.write(leftOstream);
    }

}