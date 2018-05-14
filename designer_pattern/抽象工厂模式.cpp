#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public :
	virtual void sayname() = 0;
};
class SouthApple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "�����Ϸ�ƻ��" << endl;
	}

};
class NorthApple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "���Ǳ���ƻ��" << endl;
	}

};
class SouthBanana :public Fruit
{
public:
	virtual void sayname()
	{
		cout << "�����Ϸ��㽶" << endl;
	}

};
class NorthBanana :public Fruit
{
public:
	virtual void sayname()
	{
		cout << "���Ǳ����㽶" << endl;
	}

};
class AbsFactory
{
public:
	virtual Fruit *createBanana() = 0;
	virtual Fruit* createApple() = 0;
};
class NorthFactory : public AbsFactory
{
	virtual Fruit* createBanana()
	{
		return new NorthBanana;
	}
	virtual Fruit* createApple()
	{
		return new NorthApple;
	}
};
class SouthFactory : public AbsFactory
{
	virtual Fruit* createBanana()
	{
		return new SouthBanana;
	}
	virtual Fruit* createApple()
	{
		return new SouthApple;
	}
};
int llllmain()
{
	AbsFactory *absFa = NULL;
	Fruit *fr = NULL;

	absFa = new NorthFactory;
	fr = absFa->createBanana();
	fr->sayname();
	delete fr;
	delete absFa;

	absFa = new SouthFactory();
	fr = absFa->createApple();
	fr->sayname();
	delete fr;
	delete absFa;

	system("pause");
	return 0;
}
