#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, y, a, b, c, d;
	cout << "Please enter the first real number:" ;
	cin  >> x;
	cout << "Please enter the second real number:";
	cin  >> y;
	a = x + y;
	b = x - y;
	c = x * y;
	d = x / y;
	cout << "The sum of two real numbers is��" << a << endl
		 << "The difference is��" << b << endl
		 << "The product is��" << c << endl
		 << "The quotient is��" << d << endl;

	system("pause");
	return 0;
}