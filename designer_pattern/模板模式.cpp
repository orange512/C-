#include <iostream>
using namespace std;

class MakeCar
{
public:
	virtual void MakeHead() = 0;
	virtual void MakeBody() = 0;
	virtual void MakeTail() = 0;
public:
	virtual void Make() // ģ�庯��
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
		cout << "BM5ͷ��" << endl;
	}
	virtual void MakeBody()
	{
		cout << "BM5����" << endl;
	}
	virtual void MakeTail()
	{
		cout << "BM5β��" << endl;
	}

};
int  moin()
{
	MakeCar *car = new BM5;
	car->Make();
	system("pause");
	return 0;
}