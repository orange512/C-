#include <iostream>

using namespace std;

class A
{
public:
	void dothing() {
		cout << "do A" << endl;
	}
private:

};
class B
{
public:
	void dothing() {
		cout << "do B" << endl;
	}
private:

};
class C
{
public:
	void dothing() {
		cout << "do C" << endl;
	}
private:
};
class Facade
{
public:
	Facade()
	{
		sysA = new A;
		sysB = new B;
		sysC = new C;
	}
	~Facade()
	{
		delete sysA;
		delete sysB;
		delete sysC;
	}
	void dothing()
	{
		sysA->dothing();
		sysB->dothing();
		sysC->dothing();
	}
private:
	A *sysA;
	B *sysB;
	C *sysC;
};
int fdmain()
{
	Facade *fa = new Facade;
	fa->dothing();
	system("pause");
	return 0;
}