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
		m_house->setWindow("公寓窗户");
	}
	virtual void buildWall()
	{
		m_house->setWall("公寓墙面");
	}
	virtual void buildDoor()
	{
		m_house->setDoor("公寓门");
	}
	virtual House* getHouse()
	{
		return m_house;
	}
private:
	House *m_house;

};
//别墅工程队
class VillBuilder : public Builder
{
public:
	VillBuilder()
	{
		m_house = new House;
	}
	virtual void buildWindow()
	{
		m_house->setWindow("别墅窗户");
	}
	virtual void buildWall()
	{
		m_house->setWall("别墅墙面");
	}
	virtual void buildDoor()
	{
		m_house->setDoor("别墅门");
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

	//请一个建筑公寓的建筑队
	build = new FlatBuilder;

	//设计师进行设计
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