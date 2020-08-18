#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	const float g(9.80665);
	float h, t;
	cout << "Please enter the height of the object from the ground:";
	cin  >> h;
	t = sqrt(2 * h / g);
	cout << "The time taken for an object to fall to the ground is:" << endl
		 << t << endl;

	system("pause");
	return 0;
}