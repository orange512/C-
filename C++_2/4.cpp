/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 15时11分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A(){cout<<"default A construct{}"<<endl;}
    A(const A &a){cout<<"A copy"<<endl;}
    ~A(){cout<<"A deconstruct{}"<<endl;}
};
class B
{
private:
    int y;
public:
    B(){cout<<"default B construct{}"<<endl;}
    B(const B &a){cout<<"B copy"<<endl;}
    ~B(){cout<<"B deconstruct{}"<<endl;}
};
class C
{
private:
    A a;
    B b;
public:
    C(){cout<<"default C construct{}"<<endl;}
    C(const C &a){cout<<"C copy"<<endl;}
    C(A x,B y):a(x),b(y){cout<<"C construct{}"<<endl;}//参数列表构造时只看组合类的顺序
    ~C(){cout<<"C deconstruct{}"<<endl;}
};
//析构时先析构构造时的参数的对象，再析构类中的对象，按构造的相反顺序进行析构
//一个函数结束时，会将它栈上的内存释放，所以先释放参数的对象。
int main(){
    A x;
    B y;
    //C(x,y);
    C c(x,y);
}

