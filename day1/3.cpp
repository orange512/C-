/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月24日 星期四 16时52分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{};
class B
{
    int a;
    char b;
};
class C
{
    public:
        C();
        virtual ~C();
    private:
        int a;
        char *p;
};
class D
{
    public :
        D();
        ~D();
        virtual void T();
    private:
        int b;
    
};
class a{};
class b{};
class c:public a{ virtual void fun() = 0; };
class d:public b,public c{};
int main()
{
    cout<<sizeof(A)<<sizeof(B)<<sizeof(C)<<endl;
    cout<<sizeof(D);
    int *p = NULL;
    cout<<sizeof(p)<<endl;

    cout<<"sizeof(a)"<<sizeof(a)<<endl;
    cout<<"sizeof(b)"<<sizeof(b)<<endl;
    cout<<"sizeof(c)"<<sizeof(c)<<endl;
    cout<<"sizeof(d)"<<sizeof(d)<<endl;
}

