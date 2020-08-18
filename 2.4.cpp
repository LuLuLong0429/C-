#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "X=";
	cin >> x;
	cout << "Y=";
	cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "Now X=" << x << endl;
	cout << "Now Y=" << y << endl;

	system("pause");
	return 0;
}