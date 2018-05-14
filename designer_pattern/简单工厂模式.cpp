#include <iostream>
#include <string>
using namespace std;

class Fruit
{
public:
	virtual void sayname() = 0;
};
class Apple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "����ƻ��" << endl;
	}

};
class Banana :public Fruit
{
public:
	virtual void sayname()
	{
		cout << "�����㽶" << endl;
	}

};

class Factory
{
public:
	Fruit *create(char *p)
	{
		if (strcmp(p, "banana") == 0)
		{
			return new Banana;
		}
		else if (strcmp(p, "apple") == 0)
		{
			return new Apple;
		}
		else
		{
			cout << "û������ˮ��" << endl;
		}
	}

};
int hahamain()
{
	Factory *fc = NULL;
	Fruit  *fr = NULL;

	fr = fc->create("apple");
	fr->sayname();
	delete fr;

	fr = fc->create("banana");
	fr->sayname();
	delete fr;
	delete fc;
	system("pause");
	return 0;
}

