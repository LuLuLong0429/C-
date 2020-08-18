#include<iostream>

using namespace std;

int main()
{
    int i,a,b,c,d;
    cout << "Please enter the number:";
    cin >> i;
    a = i / 1000;
    b = (i / 100) % 10;
    c = (i / 10) % 10;
    d = i % 10;
    i = a * 1000 + d * 100 + c * 10 + b;
    cout << i << endl;

    system("pause");
    return 0;
}