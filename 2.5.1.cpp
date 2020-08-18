#include<iostream>

using namespace std;

int main()
{
    int i;
    cout << "Please enter the number:";
    cin >> i;
    i = (i / 1000) % 10 * 1000 + (i % 10) * 100 + (i / 10) % 10 * 10 + (i / 100) % 10;
    cout << i << endl;

    system("pause");
    return 0;
}