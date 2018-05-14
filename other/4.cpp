/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月14日 星期六 14时29分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    //int &c =10;
    //int a = 10;
    /*int *p = &a;
    (*p)++;
    //a = (*p)++;
    cout<<a<<endl;*/
    /*int &b = a;
    int &c = b;
    c++;
    cout<<a<<endl;*/
    /*char *p = NULL;
    cout<<sizeof(p)<<endl;
    char y = 'a';
    char &x = y;
    cout<<sizeof(x)<<endl;*/
    int b = 0;
    int &a = b;
    cout<<&a<<endl;
    cout<<&b<<endl;
}
