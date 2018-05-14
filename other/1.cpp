/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月26日 星期六 09时47分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
    private :
        int a;
    public :
        A(int n = 0):a(n)
        {
            cout<<"A默认构造函数"<<endl;
        }
       A(const A &obj);
       const  A  &operator=(const A &obj)
       {
           a = obj.a;
           cout<<"赋值"<<endl;
           return *this;
       }
};
A::A(const A &obj)
{
    this -> a = obj.a;
    cout<<"A的拷贝构造函数"<<endl;
}
class B
{
    private :
       A a1;
       A a2;
    public :
       B(A n1,A n2);
};
B::B(A n1,A n2)//:a1(n1),a2(n2)
{
    a1 = n1;
    a2 = n2;
    cout<<"B的默认构造函数"<<endl;
}
int main()
{
    A m,n;
    B b1(m,n);
    
    return 0;

}
