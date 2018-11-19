#include"circle.h"
double circle::area()
{
	//PI = 3.1415926;
	return PI*radius*radius;
}
double circle::circumference()
{
	return 2 * PI*radius;
}
