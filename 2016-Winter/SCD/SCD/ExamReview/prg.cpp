#include <cstring>
#include <iostream>
using namespace std;
namespace sict{
  class MyString{
    char data_[2046];
  public:
    MyString(const char* str = ""){
      set(str);
    }
    MyString& set(const char* str){
      strncpy(data_, str, 2045);
      data_[2045] = 0;
      return *this;
    }

    operator const char*()const{
      return data_;
    }

    MyString& operator+=(const MyString& M){
      strcat(data_, M.data_);
      return *this;
    }
    MyString& operator=(const char* s){
      return set(s);
    }




  };
  ostream& operator<<(ostream& os, const MyString& M){
    return os << (const char*)M;
  }
  const char* operator+=(char* s, const MyString& M){
    return strcat(s, (const char*)M);
  }




  class Paragraph{
    MyString* s_;
    int size_;
  public:
    Paragraph() :s_(nullptr), size_(0){};
    Paragraph(MyString* s, int size){
      s_ = new MyString[size_ = size];
      for (int i = 0; i < size; i++){
        s_[i] = s[i];
      }
    }
    ~Paragraph(){
      delete[] s_;
    }
    int size()const{
      return size_;
    }
    MyString& operator[](int i){
      return s_[i];
    }
    void operator = (const MyString&) = delete;
    MyString(const MyString&) = delete;
  };

}
int main(){
  char str[1000] = "Hello ";
  MyString S = "there!";
  cout << str += S << endl;
  return 0;
}