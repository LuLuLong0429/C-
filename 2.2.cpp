#include<iostream>

using namespace std;

int main()
{
	const float m(125);
	float a, b, c, p;
	cout << "Please enter the length：(mm)";
	cin  >> a;
	cout << "Please enter the length：(mm)";
	cin  >> b;
	cout << "Please enter the length：(mm)";
	cin  >> c;
	p = m / (a * b * c) * 1000;
	cout << "The density of the object is:" << p << "kg/dm^3" << endl;

	system("pause");
	return 0;
}