#include <iostream>
using namespace std;

class Bookstor
{
public:
	virtual void sailbook() = 0;
};

class Xinhua :public Bookstor
{
public:
	virtual void sailbook()
	{
		cout << "�»��������" << endl;
	}
};

class DangDang : public Bookstor
{
public:
	virtual void sailbook()
	{
			dazhe();
			Xinhua xh;
			xh.sailbook();
	}
	void dazhe()
	{
		cout << "���7��" << endl;
	}
};
int rrmain()
{
	DangDang *dd = NULL;
	dd = new DangDang;
	dd->sailbook();

	system("pause");
	return 0;
}