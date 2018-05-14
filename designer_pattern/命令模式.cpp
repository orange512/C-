#include <iostream>
using namespace std;

class Doctor
{
public:
	void treat_eye()
	{
		cout << "医生治眼睛" << endl;
	}
	void treat_nose()
	{
		cout << "医生治鼻子" << endl;
	}
};
class CommandTreatNose
{
public:
	CommandTreatNose(Doctor *doc)
	{
		m_doctor = doc;
	}
	void treat()
	{
		m_doctor->treat_nose();
	}
private:
	Doctor *m_doctor;
};
class CommandTreatEye
{
public:
	CommandTreatEye(Doctor *doc)
	{
		m_doctor = doc;
	}
	void treat()
	{
		m_doctor->treat_eye();
	}
private:
	Doctor *m_doctor;
};
int main()
{
	Doctor *doc = new Doctor;

	CommandTreatEye *command = new CommandTreatEye(doc);
	command->treat();
	system("pause");
	return 0;
}