#include <iostream>
using namespace std;

class Engine
{
public:
	virtual void Installengine() = 0;
};
class Engine4400 :public Engine
{
public:
	virtual void Installengine()
	{
		cout << "我是4400Engine 安装成功" << endl;
	}
};
class Car
{
public:
	Car(Engine *en)
	{
		m_en = en;
	}
	virtual void installEngine() = 0;
protected:
	Engine *m_en;
};

class BM5 :public Car
{
public:
	BM5(Engine *en):Car(en){}
	virtual void installEngine()
	{
		m_en->Installengine();
	}
};

int bmmain()
{
	Engine	*en = NULL;
	Car		*bm = NULL;
	en = new Engine4400;
	bm = new BM5(en);

	bm->installEngine();
	system("pause");
	return 0;

}