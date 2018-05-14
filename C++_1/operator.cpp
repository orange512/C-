/*************************************************************************
	> File Name: operator.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月25日 星期五 15时58分37秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        char *buff;
        int len;
    public:
        String(const char* in_str);
        const String &operator +=(const String &);
        void showstring();
        ~String();
        
};
int main()
{
    String s1("hello"),s2(" liuzhuo");
    s1 += s2;
    s1.showstring();
    s1 += " jiayou";
    s1.showstring();
    return 0;
}
String::String(const char *in_str)
{
    len = strlen(in_str);
    buff = new char[len + 1];
    strcpy(buff,in_str);
}
const String& String::operator +=(const String &obj)
{
    char *temp = buff;
    len += obj.len;
    buff = new char[len+1];
    strcpy(buff,temp);
    strcat(buff,obj.buff);
    delete []temp;
    return *this;
}
void String::showstring()
{
    cout<<buff<<endl;
}
String::~String()
{
    delete []buff;
}
