/*************************************************************************
	> File Name: singleleton.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月29日 星期日 21时27分40秒
 ************************************************************************/

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t mymutex;
class Singleleton
{
private:
    static Singleleton *m_instance;
public:
    Singleleton(){}
    static Singleleton *getInstance();
};
Singleleton * Singleleton::m_instance = NULL;

Singleleton * Singleleton::getInstance()
{
    if( NULL == m_instance )
    {
        pthread_mutex_lock(&mymutex);
        if(NULL == m_instance)
        {
            m_instance = new Singleleton();
        }
        pthread_mutex_unlock(&mymutex);
    }
    return m_instance;
};
void* task(void *arg)
{
    Singleleton *obj1 = NULL;
    Singleleton *obj = obj1->getInstance();

    cout<<obj<<endl;
    return NULL;
    
}
int main()
{
    pthread_t tid;
    pthread_mutex_init(&mymutex,NULL);
    for(int i = 0 ; i < 4;i++)
    {
        pthread_create(&tid,NULL,task,NULL);
    }
}

