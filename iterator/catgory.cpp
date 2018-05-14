/*************************************************************************
	> File Name: catgory.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月01日 星期日 13时42分47秒
 ************************************************************************/

#include <iostream>
#include<typeinfo>
#include<vector>
#include<array>
#include<list>
#include<stack>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<forward_list>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void _display_category(random_access_iterator_tag)
{
    cout<<"random_access_iterator"<<endl;
}
void _display_category(bidirectional_iterator_tag)
{
    cout<<"bidirectional_iterator"<<endl;
}
void _display_category(forward_iterator_tag)
{
    cout<<"forward_iterator"<<endl;
}
void _display_category(input_iterator_tag)
{
    cout<<"input_iterator"<<endl;
}
void _display_category(output_iterator_tag)
{
    cout<<"output_iterator"<<endl;
}

template<typename I>
void display_category(I iter)
{
    typename iterator_traits<I>::iterator_category cagy;
    _display_category(cagy);
    cout<<"type(itr).name:  "<<typeid(iter).name()<<endl<<endl;
}
int main()
{

    display_category(array<int,10>::iterator());
    display_category(vector<int>::iterator());
    display_category(list<int>::iterator());
    display_category(forward_list<int>::iterator());
    display_category(deque<int>::iterator());


    display_category(set<int>::iterator());
    display_category(map<int,int>::iterator());
    display_category(multiset<int>::iterator());
    display_category(multimap<int,int>::iterator());
    display_category(unordered_set<int>::iterator());
    display_category(unordered_map<int,int>::iterator());
    display_category(unordered_multiset<int>::iterator());
    display_category(unordered_multimap<int,int>::iterator());


    display_category(istream_iterator<int>());
    display_category(ostream_iterator<int>(cout,""));
}
