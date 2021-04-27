#include <iostream>
using namespace std;
/*
To convert the class to a template:
1 - add the template tag to all blocks involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>) to all the class names except:
    A- The name of the class after the template
    A- Constructor names
    A- Destructor name


*/
template <typename type>
class DynArray {
   type* m_data;
   unsigned int m_size;
public:
   DynArray(unsigned int size = 1u);
   type &operator[](unsigned int index);
   int size()const;
   ~DynArray();
};


template <typename type>
DynArray<type>::DynArray(unsigned int size) :m_size(size) {
   m_data = new type[size];
}

template <typename type>
type& DynArray<type>::operator[](unsigned int index) {
   return m_data[index % m_size];
}

template <typename type>
DynArray<type>::~DynArray() {
   delete[] m_data;
}

template <typename type>
int DynArray<type>::size()const {
   return m_size;
}



int main() {
   int i;
   DynArray<double> I(3);
   for (i = 0; i < I.size(); i++) {
      I[i] = i + 20.3;
   }
   for (i = 0; i < 5; i++) {
      cout << I[i] << " ";
   }
   cout << endl << I.size() << endl;
   return 0;
}


