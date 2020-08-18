#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x1, y1, x2, y2, s;
	cout << "Please enter the coordinates of the first point" << endl;
	cin  >> x1
		 >> y1;
	cout << "Please enter the coordinates of the second point" << endl;
	cin  >> x2
		 >> y2;
	s = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << "The distance between the two points is:" << s << endl;

	system("pause");
	return 0;
}