/*************************************************************************
	> File Name: singleleton2.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月29日 星期日 22时00分03秒
 ************************************************************************/

#include <iostream>
#include <pthread.h>
using namespace std;

class Singleton
{
private:
    Singleton(){};
    static Singleton *m_instance;
public:
    static Singleton *get_instance()
    {
        return const_cast<Singleton*>(m_instance);
    }
};
Singleton *Singleton::m_instance = new Singleton();
void* task(void *arg)
{
    Singleton *obj = Singleton::get_instance();

    cout<<obj<<endl;
    return NULL;
    
}
int main()
{
    pthread_t tid;
    for(int i = 0 ; i < 4;i++)
    {
        pthread_create(&tid,NULL,task,NULL);
    }
}

