
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class person
{
private:
	int age;
	char *name;
public:
	person(int i, char *na = "zhuli");
	~person();
	void print();
	void print()const;
	void ModifyAge();
};
person::person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
person::~person()
{
	delete[]name;
}
void person::print()
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is const print()." << endl;
}
/*void person::print()const
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is const print()." << endl;
}
void person::ModifyAge()
{
	age++;
}
int main()
{
	const person p1(17, "wu");
	cout << "Output const object p1" << endl;
	p1.print();
	person p2(18, "zhang");
	cout << "Output general object p2" << endl;
	p2.ModifyAge();
	p2.print();
	system("pause");
	return 0;
}
