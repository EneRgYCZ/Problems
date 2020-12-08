#include <iostream>
using namespace std;

int prim(int a)
{
    int i, ok = 1;
    if (a <= 1)
    {
        ok = 0;
    }
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            ok = 0;
        }
    }
    return ok;
}

void prime(int n, int &x, int &y)
{
    int max1 = 0, max2 = 0;
    for (y = 1; y < n; y++)
    {
        if (prim(y) == 1 && y > max2)
        {
            max2 = y;
        }
    }
    for (x = 1; x < max2; x++)
    {
        if (prim(x) == 1 && x > max1)
        {
            max1 = x;
        }
    }
    cout << "x = " << max1 << endl;
    cout << "y = " << max2;
}

int main()
{
    int n, x, y;
    cout << "n = ";
    cin >> n;
    prime(n, x, y);
}
