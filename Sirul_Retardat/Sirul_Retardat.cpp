#include <iostream>
using namespace std;

int main ()
{
    int n, x, y, z, v[10001];
    cin >> n >> x >> y >> z;
    v[1] = x;
    v[2] = y;
    v[3] = z;
    for (int i = 4; i <= n; ++i)
    {
        v[i] = v[i - 1] + v[i - 2] - v[i - 3];
    }
    for (int i = n; i >= 1; --i)
    {
        cout << v[i] << " ";
    }
}