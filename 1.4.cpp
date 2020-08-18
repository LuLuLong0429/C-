#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	const float pi(3.14159);
	float r1, r2, s;
	cout << "Please enter the radius of the big circle:";
	cin  >> r1;
	cout << "Please enter the radius of the small circle:";
	cin  >> r2;
	s = pi * (r1 * r1 - r2 * r2);
	cout << "The area of the ring is:" << s << endl;

	system("pause");
	return 0;
}