/*************************************************************************
	> File Name: friend.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月28日 星期六 15时54分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Q
{
public:
    void print();
private:
    int date;
};

class Test
{
public:
    friend void func(Test A);
    friend void Q::print();
private:
    int number;

};
void Q::print()
{
    cout<<this<<endl;
    cout<<"1234455"<<endl;
}
void func(Test A)
{
    A.number = 5;
    cout<<A.number<<endl;
}
int main()
{
    Test a;
    func(a);
    Q q;
    q.print();
    cout<<&q<<endl;
}
