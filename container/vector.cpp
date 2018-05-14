/*************************************************************************
	> File Name: vector.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月12日 星期一 17时17分05秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    std::vector<int> vec;
    vector<int>::iterator iter;
    vec.push_back(6);
    vec.push_back(5);

    vec.insert(vec.begin()+2,2);
    vec.erase(vec.begin()+2);

    for(iter = vec.begin();iter != vec.end();iter++)
        cout<<*iter<<endl;

    int nsize = vec.size();
    cout<<"size = "<<nsize<<endl;
    sort(vec.begin(),vec.end());

    for(iter = vec.begin();iter != vec.end();iter++)
        cout<<*iter<<endl;

}
