#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (score > 5 || score < 0)  throw score;
	if (age > 25 || age < 16)  throw age;
	return score, age; 
}
int main()
{
	cout << "����ѧ����Ϣ��";
	string name;
	int age;
	float score;
	cin >> name >> age >> score;
	try
	{
		cout << name << "score,age=" << checkAgeScore(score, age) << endl;
	}
	catch (int)
	{
		cout << "��Ϣ����" << "\n";
	}
	system("pause");
	return 0;
}