/*************************************************************************
	> File Name: cast.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月25日 星期三 10时57分03秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double d = 2.3;
    void *p = &d;

    double *k = static_cast<double*>(p);
    cout<<*k;
}
