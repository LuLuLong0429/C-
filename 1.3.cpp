#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, a, b, c, p, s, l;
	cout << "Please enter the coordinates of the first point" << endl;
	cin  >> x1 
		 >> y1;
	cout << "Please enter the coordinates of the second point" << endl;
	cin  >> x2
		 >> y2;
	cout << "Please enter the coordinates of the third point" << endl;
	cin  >> x3
		 >> y3;
	a= sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b= sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c= sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	p = (a + b + c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	l = a + b + c;
	cout << "The circumference of the triangle is :" << l << endl
		 << "The area of the triangle is:" << s << endl;

	system("pause");
	return 0;
}