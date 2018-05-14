//目录结构 中  
//目录和文件是等价的
#include <iostream>
#include <string>
#include <list>
using namespace std;
class IFile
{
public:
	virtual void showname() = 0;
	virtual int add(IFile *file) = 0;
	virtual int remove(IFile *file) = 0;
	virtual list<IFile *>* getchild() = 0;
};
class File : public IFile
{
public:
	File(string name)
	{
		m_name = name;

	}
	virtual void showname()
	{
		cout << m_name << endl;
	}
	virtual int add(IFile *file)
	{
		return -1;
	}
	virtual int remove(IFile *file)
	{
		return -1;
	}
	virtual list<IFile *>* getchild()
	{
		return NULL;
	}
private:
	string m_name;
};
class Dir : public IFile
{
public:
	Dir(string name)
	{
		m_name = name;
		m_list = new list<IFile*>;
		m_list->clear();
	}
	virtual void showname()
	{
		cout << m_name << endl;
	}
	virtual int add(IFile *ifile)
	{
		m_list->push_back(ifile);
		return 0;
	}
	virtual int remove(IFile *file)
	{
		for (auto it = m_list->begin(); it != m_list->end(); it++)
		{
			if (file == *it)
				m_list->erase(it);
		}
		return 0;
	}
	virtual list<IFile *>* getchild()
	{
		return m_list;
	}
private:
	string m_name;
	list<IFile*> *m_list;

};
int zuhemain()
{
	Dir *root = new Dir("C");
	root->showname();
	Dir *dir1 = new Dir("111dir");
	File *aaafile = new File("aaafile");

	root->add(dir1);
	root->add(aaafile);
	list<IFile*> *mylist = root->getchild();
	for (auto it = mylist->begin(); it != mylist->end(); it++)
	{
		(*it)->showname();
	}

	system("pause");
	return 0;
}