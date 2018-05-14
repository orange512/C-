#include <iostream>
using namespace std;

class AbsBackStaff
{
public:
	virtual void dothing() = 0;
};

class SaveBacker:public AbsBackStaff
{
public:
	virtual void dothing()
	{
		cout << "存钱" << endl;
	}
};
class OutBacker:public AbsBackStaff
{
public:
	virtual void dothing()
	{
		cout << "取钱" << endl;
	}
};
//框架函数
void Howdo(AbsBackStaff *bs)
{
	bs->dothing();//有多态发生
}


int main2()
{
	AbsBackStaff *bs = NULL;
	bs = new SaveBacker;
	Howdo(bs);

	bs = new OutBacker;
	Howdo(bs);

	getchar();
	return 0;
}