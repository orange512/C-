#include <iostream>

using namespace std;

class Car
{
public:
	virtual void show() = 0;
};

class Runcar : public Car
{
public:
	virtual void show()
	{
		cout << "我是跑车" << endl;
	}
};
class Swimcar : public Car
{
public:
	Swimcar(Car *car)
	{
		m_car = car;
	}
	void swim()
	{
		cout << "可以游" << endl;
	}
	virtual void show()
	{
		m_car->show();
		swim();
	}

private:
	Car *m_car;
};
class Flycar :public Car
{
public:
	Flycar(Car *car)
	{
		m_car = car;
	}
	void fly()
	{
		cout << "我可以飞" << endl;
	}
	virtual void show()
	{
		m_car->show();
		fly();
	}
private:
	Car *m_car;
};

int demain()
{
	Car *mycar = NULL;
	mycar = new Runcar;
	mycar->show();
	cout << "------------------" << endl;

	Swimcar *scar = NULL;
	scar = new Swimcar(mycar);
	scar->show();

	cout << "*******************" << endl;

	Flycar *fcar = NULL;
	fcar = new Flycar(scar);
	fcar->show();

	system("pause");
	return 0;
}