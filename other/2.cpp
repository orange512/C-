/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月26日 星期六 16时43分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        int c;
        A(){cout<<"A"<<endl;}
        ~A(){cout<<"~A"<<endl;}
};
class B:public A
{
    private: 
        int b;
    public:
        int d;
        B();
//        ~A();
//        c;
};
int main()
{
    B b;

}
