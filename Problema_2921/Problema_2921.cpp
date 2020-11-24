#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int v[100001];
    long long int w[100001], suma = 0;
    w[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        w[i] = w[i - 1] + v[i];
    }
    int x, y, temp;
    cin >> m;
    long long int maxx = -99999999999999;
    for (int i = 1; i <= m; ++i)
    {
        cin >> x >> y;
        if (x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        suma = w[y] - w[x - 1];
        if (suma > maxx)
        {
            maxx = suma;
        }
    }
    cout << maxx;
    return 0;
}