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
		cout << "��Ǯ" << endl;
	}
};
class OutBacker:public AbsBackStaff
{
public:
	virtual void dothing()
	{
		cout << "ȡǮ" << endl;
	}
};
//��ܺ���
void Howdo(AbsBackStaff *bs)
{
	bs->dothing();//�ж�̬����
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