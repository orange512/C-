/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年10月14日 星期六 09时45分47秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[5]= {1,2,3,4,5};
    arr+5;//没有改变首地址
    //arr++;//改变了他的首地址，指向错乱
    printf("%d\n",*(arr+1));
    //++(&arr[0]);
    int a = 10;
    int *p = &a;
    *(p+1) = 30;
    int n = *(p+1);
    printf("%d\n",n);
}
