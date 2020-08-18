#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, y, s;
	cout << "Please enter the first real number:";
	cin  >> x;
	cout << "Please enter the second real number:";
	cin  >> y;
	s = (abs(x) - abs(y)) / (1 + abs(x * y));
	cout << "The result is:" << s << endl;
	
	system("pause");
	return 0;
}