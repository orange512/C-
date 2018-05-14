#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
	virtual void sayname() = 0;
};
class Apple :public Fruit
{
public:
	virtual void sayname()
	{
		cout << "我是苹果" << endl;
	}
};
class Banana : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "我是香蕉" << endl;
	}
};

class AbsFactory
{
public:
	virtual Fruit *create_fruit() = 0;
};

class AppleFactory : public AbsFactory
{
public:
	virtual Fruit* create_fruit()
	{
		return new Apple;
	}
};
class BananaFactory : public AbsFactory
{
public:
	virtual Fruit* create_fruit()
	{
		return new Banana;
	}
};

int kekemain()
{
	AbsFactory *abFa = NULL;
	Fruit *fr = NULL;

	abFa = new BananaFactory;
	fr = abFa->create_fruit();
	fr->sayname();
	delete fr;

	abFa = new AppleFactory;
	fr = abFa->create_fruit();
	fr->sayname();
	delete fr;
	
	delete abFa;
	system("pause");

	return 0;
}