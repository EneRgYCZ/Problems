#include <iostream>
using namespace std;

int main()
{
    int n, x[1001], k, i, j, start = 0, end = 0, ok, pos;
    cin >> n >> k;
    for (i = 1; i <= n; ++i)
    {
        cin >> x[i];
    }
    for (i = 1; i < n; ++i)
    {
        for (j = i + 1; j <= n; ++j)
        {
            ok = 1;
            for (pos = 0; pos < k; ++pos)
            {
                if (x[i + pos] != x[j + pos])
                {
                    ok = 0;
                }
            }
            if (ok && start == 0)
            {
                start = i;
                end = j;
            }
        }
    }
    if (start)
    {
        cout << start << " " << end;
    }
    else
    {
        cout << "NU";
    }
}