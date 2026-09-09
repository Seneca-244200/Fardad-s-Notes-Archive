#pragma once
#ifndef SENECA_TITLE_H
#define SENECA_TITLE_H
namespace seneca {
    class Title {
        char* m_text;
    public:
        Title(const char* text);
        ~Title();
        void display()const;
    };
}
#endif // !SENECA_TITLE_H


