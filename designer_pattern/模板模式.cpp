#include <iostream>
using namespace std;

class MakeCar
{
public:
	virtual void MakeHead() = 0;
	virtual void MakeBody() = 0;
	virtual void MakeTail() = 0;
public:
	virtual void Make() // 模板函数
	{
		MakeTail();
		MakeBody();
		MakeHead();
	}
};
class BM5:public MakeCar
{
public:
	virtual void MakeHead()
	{
		cout << "BM5头部" << endl;
	}
	virtual void MakeBody()
	{
		cout << "BM5身体" << endl;
	}
	virtual void MakeTail()
	{
		cout << "BM5尾部" << endl;
	}

};
int  moin()
{
	MakeCar *car = new BM5;
	car->Make();
	system("pause");
	return 0;
}