#include<iostream>
using namespace std;
#include"circle.h"
int main()
{
	circle c1(3.5), c2;
	cout << "area of c1=" << c1.area() << ",circumference of c1=" << c1.circumference() << endl;
	cout << "area of c2=" << c2.area() << ",circumference of c2=" << c2.circumference() << endl;
	system("pause");
	return 0;
}