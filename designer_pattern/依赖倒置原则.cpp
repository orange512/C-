#include <iostream>
#include <string>

using namespace std;

class Cpu
{
public:
	virtual void work() = 0;
};

class HardDisk
{
public:
	virtual void work() = 0;
};

class InterCpu :public Cpu
{
public:
	virtual void work()
	{
		cout << "InterCpu 工作正常" << endl;
	}
};
class SumsangDisk : public HardDisk
{
public:
	virtual void work()
	{
		cout << "三星硬盘工作正常" << endl;
	}	
};


class MyComputer
{
public:
	MyComputer(Cpu *cpu, HardDisk *disk)
	{
		this->m_cpu = cpu;
		this->m_disk = disk;
	}

	void work()
	{
		this->m_disk->work();
		this->m_cpu->work();
	}
private:
	Cpu *m_cpu;
	HardDisk *m_disk;
};


int hellomain()
{

	Cpu *c_cpu = NULL;
	HardDisk *c_disk = NULL;


	c_cpu = new InterCpu();
	c_disk  = new SumsangDisk();

	MyComputer *mypc = new MyComputer(c_cpu, c_disk);


	mypc->work();

	delete mypc;
	delete c_cpu;
	delete c_disk;

	getchar();

	return 0;
}