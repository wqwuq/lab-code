﻿#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"student.h"
const int N = 10;
void menu();
void outputstu(const student *array);
void inputstu(student *array);
int searchstu(const student *array, char *n);
bool insertstu(student *array);
bool Deletestu(student *array, char *n);
int main()
{
	student array[N];
	int choice;
	char na[20];
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
		{
			case 1:inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char n[20];
				cin >> n;
				int i;
				i = searchstu(array, n);
				if (i == N)
					cout << "���޴���\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array); break;
			case 4:if (insertstu(array))
				cout << "�ɹ�����һ����¼\n";
				   else
					   cout << "����ʧ��\n";
				break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (Deletestu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ��\n";
				break;
			default:break;
		}
	} while (choice);

	return 0;
}
void menu()
{
	cout << "**********1.¼����Ϣ**********" << endl;
	cout << "**********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ**********" << endl;
	cout << "**********0.�˳�*********" << endl;
}
void outputstu(const student *array)
{
	cout << "ѧ��������" << student::Getcounts << endl;
	for (int i = 0; i < N; i++)
	if (array[i].Getage())
		array[i].display();
}
int searchstu(const student *array, char *n)
{

	int i;
	int j = N;
	for (i = 0; i < N; i++)
	if (array[i].Getage())
	if (strcmp(array[i].Getname(), n) == 0)
	{
		j = i;
		break;
	}
	return j;
}
void inputstu(student *array)
{
	char ch;
	int i = 0;
	do
	{
		if (student::Getcounts() == N)
			cout << "�����������޷�����¼��\n" << endl;
		if (!array[i].Getage())
			array[i++].input();
		cout << "����������(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
bool insertstu(student *array)
{
	if (student::Getcounts() == N)
	{
		cout << "�����������޷������¼" << endl;
		return false;
	}
	for (int i = 0; array[i].Getage(); i++)
		array[i].insert();
	return true;
}
bool Deletestu(student *array, char *n)
{
	if (student::Getcounts() == 0)
	{
		cout << "û�м�¼���޷�ɾ��" << endl;
		return false;
	}
	int i = searchstu(array, n);
	if (i == N)
	{
		cout << "���޴��ˣ��޷�ɾ��\n";
		return false;
	}
	array[i].Delete();
	return true;
}