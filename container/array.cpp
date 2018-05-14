/*************************************************************************
> File Name: array.cpp
> Author:   Orange512
> Mail:     huiyi950512@gmail.com
> Created mytime: 2018年03月15日 星期四 20时10分54秒
************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<array>

using namespace std;
string get_a_target_string()
{
    long target = 0;
    char buf[10];

    std::cout<<"target ("<<RAND_MAX<<")";
    snprintf(buf,10,"%ld",target);
    return string(buf);
}
long get_a_long()
{
    long target = 0;
    std::cout<<"target (0~"<<RAND_MAX<<")";
    cin>>target;
    return target;
}
int compare_long(const void * a,const void *b)
{
    return (*(long*)a - *(long*)b);
}
int compare_strings(const void *a,const void *b)
{
    if(*(string*)a > *(string *)b)
    return 1;
    else if(*(string *)a < *(string *)b)
    return -1;
    else 
    return 0;
}
int main()
{
    array<long,1000000> a;
    clock_t mytime = clock();

    for(int i = 0 ; i < 1000000;i++)
    a[i] = rand();

    std::cout<<"milli.seconds :"<<(clock() - mytime)<<endl;
    std::cout<<"array.size = "<<a.size()<<endl;
    std::cout<<"array.front = "<<a.front()<<endl;
    std::cout<<"array.data = "<<a.data()<<endl;

    long target = get_a_long();
    mytime = clock();
    qsort(a.data(),1000000,sizeof(long),compare_long);

    long *p = (long *)bsearch(&target,(a.data()),1000000,sizeof(long),compare_long);

    std::cout<<"sort_search"<<(clock()-mytime)<<endl;
    if(p != NULL)
    std::cout<<"found"<<*p<<endl;
    else
    std::cout<<"not found"<<endl;

}
