#include<iostream>

using namespace std;

int main()
{
	const float d(0.5);
	float a, b, c, m;
	cout << "Please enter the length£º(mm)";
	cin  >> a;
	cout << "Please enter the length£º(mm)";
	cin  >> b;
	cout << "Please enter the length£º(mm)";
	cin  >> c;
	m = d * a * b * c * 0.000001;
	cout << "The mass of the object is:" << m << "kg" << endl;

	system("pause");
	return 0;
}