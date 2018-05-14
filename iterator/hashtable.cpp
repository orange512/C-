/*************************************************************************
	> File Name: hashtable.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月01日 星期日 14时11分46秒
 ************************************************************************/

#include <iostream>
#include<string.h>
#include<scoped_allocator>
#include<unordered_map>
using namespace std;

struct eqstr
{
    bool operator()(const char *s1,const char *s2)const
    {   
        return strcmp(s1,s2) == 0;
    }
};
std::_Hashtable<const char *,const char *,hash<const char *>,_Identity<const char *>,eqstr> 
        ht(50,hash<const char *>(),eqstr());


int main()
{

}
