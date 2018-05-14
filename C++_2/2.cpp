/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月12日 星期日 11时09分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    const int *p = &a;
    //p++;
    a++;
    const int b = 10;
    const int *q = &b;
}
