#include<iostream>

using namespace std;

int main()
{
    int i, a, b, c, d, y, z;
    cout << "Please enter the number:";
    cin >> i;
    a = i / 1000;
    b = (i / 100) % 10;
    c = (i / 10) % 10;
    d = i % 10;
    y = a * b;
    z = c * d;
    if (y != z)
    {
        if (y > z)
        {
            cout << "y>z" << endl;
        }
        if (y < z)
        {
            cout << "y<z" << endl;
        }
    }
    else
    {
        cout << "y=z" << endl;
    }


    system("pause");
    return 0;
}
