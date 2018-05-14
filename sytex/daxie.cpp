/*************************************************************************
	> File Name: daxie.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月24日 星期二 20时55分38秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    string s("hello world");

    for( decltype (s.size()) index = 0; index != s.size() && !isspace(s[index]);index++ )
        s[index] = toupper(s[index]);

    cout<<s<<endl;
}
