#include <iostream>
#include <string>
using namespace std;

class House
{
public:
	void setDoor(string a)
	{
		m_door = a;
	}
	void setWall(string c)
	{
		m_wall = c;
	}
	void setWindow(string b)
	{
		m_window = b;
	}
	void getDoor()
	{
		cout << m_door << endl;
	}
	void getWindow()
	{
		cout << m_window << endl;
	}
	void getWall()
	{
		cout << m_wall << endl;
	}
private:
	string m_door;
	string m_window;
	string m_wall;
};
class Builder
{
public:
	virtual void buildWindow() = 0;
	virtual void buildWall() = 0;
	virtual void buildDoor() = 0;
	virtual House* getHouse() = 0;
};

class FlatBuilder : public Builder
{
public:
	FlatBuilder()
	{
		m_house = new House;
	}
	virtual void buildWindow()
	{
		m_house->setWindow("��Ԣ����");
	}
	virtual void buildWall()
	{
		m_house->setWall("��Ԣǽ��");
	}
	virtual void buildDoor()
	{
		m_house->setDoor("��Ԣ��");
	}
	virtual House* getHouse()
	{
		return m_house;
	}
private:
	House *m_house;

};
//�������̶�
class VillBuilder : public Builder
{
public:
	VillBuilder()
	{
		m_house = new House;
	}
	virtual void buildWindow()
	{
		m_house->setWindow("��������");
	}
	virtual void buildWall()
	{
		m_house->setWall("����ǽ��");
	}
	virtual void buildDoor()
	{
		m_house->setDoor("������");
	}
	virtual House* getHouse()
	{
		return m_house;
	}
private:
	House *m_house;

};
class Disigner
{
public:
	Disigner(Builder *b)
	{
		m_build = b;
	}
	void Construct()
	{
		m_build->buildWall();
		m_build->buildWindow();
		m_build->buildDoor();
		
	}
private:
	Builder *m_build;
};

int  yumain()
{
	House *hourse = NULL;
	Builder *build = NULL;
	Disigner *ds = NULL;

	//��һ��������Ԣ�Ľ�����
	build = new FlatBuilder;

	//���ʦ�������
	ds = new Disigner(build);
	ds->Construct();
	hourse = build->getHouse();
	hourse->getWindow();
	hourse->getDoor();
	hourse->getWall();

	delete build;
	delete hourse;
	delete ds;
	build = new VillBuilder;
	ds = new Disigner(build);
	ds->Construct();
	hourse = build->getHouse();
	hourse->getDoor();
	hourse->getWall();

	system("pause");
	return 0;
}