#include <iostream>
using namespace std;

void zero(int n, int v[])
{
    int par[101], impar[101], pozpar = 1, pozimpar = 1;
    for (int i = 1; i <= 2 * n; ++i)
    {
        if (v[i] % 2 == 0)
        {
            par[pozpar++] = v[i];
        }
        else
        {
            impar[pozimpar++] = v[i];
        }
    }
    int pos = 1;
    for (int i = 1; i < pozimpar; i++)
    {
        v[pos] = impar[i];
        pos = pos + 2;
    }
    pos = 2;
    for (int i = 1; i < pozpar; i++)
    {
        v[pos] = par[i];
        pos = pos + 2;
    }
}

int main()
{
    int n = 5, v[101] = {4, 5, 0, 9, 10, 7, 15, 3, 8, 10};
    zero(n, v);
    for (int i = 0; i < n * 2; i++)
    {
        cout << v[i];
    }
}