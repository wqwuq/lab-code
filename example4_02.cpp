/#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
	static int total;
public:
	
	student(){ total++; };
	~student(){ total--; };
	student(int n, char *p = "wang");
	void Getname();
	int Getnum();
	static void print();
};
int student::total = 0;
student::student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void student::Getname()
{
	cout << name << endl;
}
int student::Getnum()
{
	return num;
}
void student::print()
{
	cout << "The number of all students:" << total<<endl;
}
int main()
{
	student::print();
	student *p = new student(13);
	student::print();
	p->print();
	delete p;
	student::print();
	student s[2];
	//student::print(); 
	//student::print(); 
	//p->print();
	s[0].print();
	s[1].print();
	system("pause");
	return 0;
}
