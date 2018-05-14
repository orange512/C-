/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 11时46分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
public :
    void fun(){cout<<"A:fun()"<<endl;}
    A(int a,int b):x(a),y(b){cout<<"A construct {}"<<endl;}
    A(){};
    ~A(){cout<<"A Deconstruct"<<endl;}
protected:
    int x;
    void test(){cout<<x<<y;}
private:
    int y;
};
class B:public A
{
public :
   // void fun(){cout<<"B:fun()"<<endl;}
    B(int a,int b,int c,int d):A(a,b),z(c),h(d){cout<<"B constuct {}"<<endl;}//默认添加A的默认构造函数
    void print(){cout<<x<<z<<h;}//子类能访问的基类的protect和public不能访问private成员
    void calltest(){test();}
    ~B(){cout<<"B Deconstruct"<<endl;}
protected:
    int z;
    //void test(){cout<<x<<z<<h;}
private:
    int h;
};
class C:public B
{
public :
   // void fun(){cout<<"B:fun()"<<endl;}
    C(int a,int b,int c,int d,int e,int f):B(a,b,c,d),e(e),f(f){cout<<"C constuct{}"<<endl;}//默认添加B的默认构造函数
    void print(){cout<<x<<z<<e<<f<<endl;}//子类能访问的基类的protect和public不能访问private成员
    void calltest(){test();}
    ~C(){cout<<"C Deconstruct"<<endl;}
protected:
    int e;
    //void test(){cout<<x<<z<<h;}
private:
    int f;
    
};
int main()
{
    C bay(1,2,3,4,5,6);
    bay.fun();
    bay.calltest();
    //bay.x;//不能访问自己的变量
    //bay.y;
    //bay.z;
}

