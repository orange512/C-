/*************************************************************************
	> File Name: const.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月28日 星期六 17时50分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
void fun(int a){}
void g(int &ra){}
int main()
{
    int a = 10;
    const int *m = &a;//常指针指向常量，指针指向的内容为常量
    a++;
    //(*m)++;不可以
    //*m = 0;error
    int b = 10;
    int const &p = b;
    const int &p1 = b;
    //const int c =10;
    //int &d = c;不行
    //没有 int & const a = b;  因为引用不能做移位运算

    const int i = 1;
    *(const_cast<int*>(&i)) = 2;
    cout<<*(int *)&i<<endl;
    cout<<i<<endl;

    const int w = 10;
    fun(w);// int a = w;
//    g(w);int &ra = w;

    
}
