﻿#define _CRT_SECURE_NO_WARNINGS
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
	cout << "����:" << name << endl;
	cout << "���֤" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << speciality << endl;
	cout << "����:" << age << endl;
}
void student::input()
	char n[10];
	cout << "������  ��:";
	cin >> n;
	if (name)
		delete[]name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	cout << "�������֤" << endl;
	cin >> ID;
	cout << "��������:" << endl;
	cin >> age;
	cout << "����רҵ:" << endl;
	cin >> speciality;
	cout << "����ѧ��:" << endl;
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