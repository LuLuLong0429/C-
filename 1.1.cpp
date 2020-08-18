#include<iostream>

using namespace std;

int main()
{
	float a, b, c, s, l;
	cout << "Please enter the length of the first right side of the right triangle:";
	cin  >> a;
	cout << "Please enter the length of the first right side of the right triangle:";
	cin  >> b;
	cout << "Please enter the length of the hypotenuse of a right triangle:";
	cin  >> c;
	s = a * b / 2;
	l = a + b + c;
	cout << "The circumference of the triangle is£º" << l << endl
		 << "The area is£º" << s << endl;

	system("pause");
	return 0;
}