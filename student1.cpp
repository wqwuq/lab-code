#define _CRT_SECURE_NO_WARNINGS
#include"student.h"
int student::counts = 0;
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char *n, char *id, char *num, char *spe, int ag)
{
	if (n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spe);
	age = ag;
	counts++;
}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
	counts++;
}
student::~student()
{
	if (name)
		delete[]name;
	counts--;
}
char *student::Getname()const
{
	return name;
}
char *student::GetID()
{
	return ID;
}
char *student::Getnumber()
{
	return number;
}
char *student::Getspec()
{
	return speciality;
}
int student::Getage()const
{
	return age;
}
void student::display()const
{
	cout << "姓名:" << name << endl;
	cout << "身份证" << ID << endl;
	cout << "学号:" << number << endl;
	cout << "专业:" << speciality << endl;
	cout << "年龄:" << age << endl;
}
void student::input()
	char n[10];
	cout << "输入姓  名:";
	cin >> n;
	if (name)
		delete[]name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	cout << "输入身份证" << endl;
	cin >> ID;
	cout << "输入年龄:" << endl;
	cin >> age;
	cout << "输入专业:" << endl;
	cin >> speciality;
	cout << "输入学号:" << endl;
	cin >> number;
	counts++;
}
void student::insert()
{
	if (!age)
		input();
}
void student::Delete()
{
	age = 0;
	counts--;
}
int student::Getcounts()
{
	return counts;

}