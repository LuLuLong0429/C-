#include<iostream>

using namespace std;

int main()
{
    int i, a, b, c, d, e, f, g, h;
    cout << "Please enter the number:";
    cin  >> i;
    a = i / 100000;
    b = (i / 10000) % 10;
    c= (i / 1000) % 10;
    d= (i / 100) % 10;
    e = (i / 10) % 10;
    f = i % 10;
    g = a + b + c;
    h = d + e + f;
    cout << "A=" << g << endl
         << "B=" << h << endl;

    system("pause");
    return 0;
}