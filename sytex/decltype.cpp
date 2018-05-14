/*************************************************************************
	> File Name: decltype.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月24日 星期二 20时30分54秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    string s("hello world!!");

    decltype(s.size()) count = 0;

    for(auto c: s)
        if(ispunct(c))
            ++count;
    cout<<count<<" punctuation in "<<s<<endl;
    return 0;
}
