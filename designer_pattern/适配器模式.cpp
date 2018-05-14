#include <iostream>
using namespace std;

class Power18v
{
public:
	virtual void usePower18v() = 0;
};
class Power220v
{
public:
	void usePower220v()
	{
		cout << "ÎÒÊÇ220vµçÑ¹£¬»¶Ó­Ê¹ÓÃ" << endl;
	}
};
class Adapter : public Power18v
{
public:
	Adapter(Power220v *cur)
	{
		m_cur = cur;
	}
	virtual void usePower18v()
	{
		cout << "ÊÊÅäÆ÷ÊÊÅä220v" << endl;
		m_cur->usePower220v();
	}
private:
	Power220v *m_cur;
};
int trmain()
{
	Power220v	*cur = NULL;
	Adapter		*ad = NULL;

	cur = new Power220v;
	ad = new Adapter(cur);
	ad->usePower18v();

	system("pause");
	return 0;
}