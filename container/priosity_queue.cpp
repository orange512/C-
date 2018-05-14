/*************************************************************************
	> File Name: priosity_queue.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月12日 星期一 17时50分32秒
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

class Node 
{
private:
    int x, y; 
public:
    Node(int a,int b):x(a),y(b){}
    void print()
    {
        cout<<"x = "<<x<<"　　"<<"y = "<<y<<endl;
    }
    friend bool operator < (Node a, Node b)     
    {         
        return a.x < b.x; //类中ｘ的优先级高     
    }
};
int main()
{
    Node n1(5,6),n2(3,4);
    priority_queue<Node>q;   

    q.push(n1);
    q.push(n2);
    Node temp  = q.top();
    temp.print();
    while( !q.empty()){
        temp = q.top();
        temp.print();
        q.pop();
    }
    priority_queue<Node>::iterator iter;
    for(iter = q.begin();iter != q.end();iter++)
        iter->print();

}
