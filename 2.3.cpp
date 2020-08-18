#include<iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "X=";
	cin  >> x;
	cout << "Y=";
	cin >> y;
	z = y;
	y = x;
	x = z;
	cout << "Now X=" << x << endl;
	cout << "Now Y=" << y << endl;

	system("pause");
	return 0;
}