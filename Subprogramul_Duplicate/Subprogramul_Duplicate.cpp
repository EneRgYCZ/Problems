#include <iostream>
using namespace std;

void duplicate (int n, int &d)
{
    d = 0;
    int i = 0, v[1001], ok = 0;
    while (n)
    {
        if ((n % 10) % 2 == 1)
        {
            v[i] = n % 10;
            v[i + 1] = n % 10;
            i = i + 2;
            ok = 1;
        }
        else 
        {
            v[i] = n % 10;
            i++;
        }
    }
    d = v[0];
    if (ok = 1)
    {
        for (i; i <= 0; i--)
        {
            d = d * 10 + v[i];
        }           
    }
    else 
    {
        d = -1;
    }
}

int main()
{
    int d = 0;
    duplicate (2019, d);
    cout << d;
}
