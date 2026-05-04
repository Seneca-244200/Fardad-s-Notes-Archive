#ifndef SENECA_ARRAY_H
#define SENECA_ARRAY_H
#include <iostream>

/*
1 - add the template statement to be beginning of block
2 - replace all the types needed to the type of the template
3- add the typename tag "<type>" to the all the class names except:
   I - the name of the class right after the template statement
   II - The constructor names
   III - the destructor


*/


namespace seneca {
    /// <summary>
    /// type must support:<br />   default construction<br/ > copy assignment<br />
    /// </summary>
    /// <typeparam name="type"></typeparam>
    template <typename type, std::size_t initSize = 10>
    class Array {
        type* m_data{};
        size_t m_size{};
    protected:
        Array<type>& resize(size_t newsize);
    public:
        Array(size_t size = initSize);
        Array(const Array<type>&) = delete;
        Array<type>& operator=(const Array<type>&) = delete;
        virtual ~Array();
        size_t size()const;
        type& operator[](size_t index);
        const type& operator[](size_t index)const;
    };


    template <typename type>
    Array<type>& Array<type>::resize(size_t newsize) {
        type* temp = new type[newsize = newsize ? newsize : 1] {};
        size_t i = 0;
        for (i = 0; i < m_size && i < newsize; i++) {
            temp[i] = m_data[i];
        }
        delete[] m_data;
        m_size = newsize;
        m_data = temp;
        return *this;
    }

    template <typename type>
    Array<type>::Array(size_t size) {
        if (size == 0) size = 1;
        m_data = new type[m_size = size] {};
    }

    template <typename type>
    Array<type>::~Array() {
        delete[] m_data;
    }

    template <typename type>
    size_t Array<type>::size() const {
        return m_size;
    }

    template <typename type>
    type& Array<type>::operator[](size_t index) {
        if (index >= m_size) resize(index + 1);
        return m_data[index];
    }

    template <typename type>
    const type& Array<type>::operator[](size_t index) const {
        return m_data[index % m_size];
    }

    template <typename type>
    std::ostream& operator<<(std::ostream& ostr, const Array<type>& other) {
        for (size_t i = 0; i < other.size(); i++) {
            std::cout << other[i];
            if (i != other.size() - 1) std::cout << ", ";
        }
        return ostr;
    }

}
#endif // !SENECA_ARRAY_H

