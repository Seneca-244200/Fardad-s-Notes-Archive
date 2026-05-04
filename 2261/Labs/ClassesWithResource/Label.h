#ifndef SENECA_LABEL_H
#define SENECA_LABEL_H
#include <iostream>
namespace seneca {
    class Label {
        char m_fill{};
        char* m_text{};
    public:
        explicit Label(const char* text = nullptr, char fill = '*');

        std::ostream& print(std::ostream& ostr = std::cout)const;
    };
}
#endif // !SENECA_LABEL_H


