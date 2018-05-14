/*************************************************************************
	> File Name: map.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月28日 星期六 20时21分02秒
 ************************************************************************/

#include <iostream>
#include<map>
#include<vector>
using namespace std;

    std::map<int,int> mymap;

    std::vector<int> vec = {2,4,6,8,9,2,4,2};
int main()
{

    for(unsigned int  i = 0 ; i < vec.size();i++)
        mymap[i] = vec[i];

    int k = mymap.count(2);
    cout<<k<<endl;
}
