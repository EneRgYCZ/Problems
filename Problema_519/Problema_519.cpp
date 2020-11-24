#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x[1001], y[1001], i, j, pos = 1, n, nr, m, ok = 0, numara = 0;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cin >> x[i];
    }
    cin >> m;
    for (i = 1; i <= m; ++i)
    {
        cin >> y[i];
    }
    for (i = 1; i <= n; ++i)
    {
        ok = 1;
        for (j = 1; j <= m; ++j)
        {
            if (y[j] != x[i + j - 1])
            {
                ok = 0;
            }
        }
        if (ok)
        {
            numara ++;
            ok = 0;
        }
    }
    cout << numara;
}