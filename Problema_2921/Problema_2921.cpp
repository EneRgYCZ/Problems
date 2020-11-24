#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m, v[10001], i, j, a, b, s, gasit = 0, max = 0;
    long long suma = 0;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    cin >> m;
    for (i = 1; i <= m; ++i)
    {
        cin >> a >> b;
        suma = 0;
        for (j = a; j <= b; ++j)
        {
            suma = suma + v[j];
        }
        if (max <= suma)
        {
            suma = max;
        }
    }
    cout << max;
}