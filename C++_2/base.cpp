/*************************************************************************
	> File Name: base.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 17时01分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Base
{
public:
    Base(){cout<<"Base construct{}"<<endl;}
    Base(const Base &a){cout<<"base copy"<<endl;}
    void test(){cout<<x<<endl;}
private:
    int x;
};
class Child:public Base
{
public:
    Child(){cout<<"Child construct{}"<<endl;}
    Child(const Child &a){cout<<"Child copy"<<endl;}
    void test1(){cout<<y<<endl;}
private:
    int y;
};
int main()
{
    Child ch;
    Base &ba = ch;
    ba.test();
    Base g;
    //Child &s = g;
    //ba.test1();
    //Base *pb = new Base();
    //Child *pc = pb;
    //ch = ba;
    //ba = ch;
}
