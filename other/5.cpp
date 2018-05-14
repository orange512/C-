/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月28日 星期六 15时10分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
    public :
    A();
    A(int n);
    //A(int n):n(a){};
    ~A();
    A(const A& obj);
    A& operator=(const A& obj);
    private:
    int a;
};
A::A(){};
A::A(int n)
{
    this->a = n;
}
A::A(const A& obj)
{
    this->a = obj.a;
}
A& A::operator=(const A& obj)
{
}

