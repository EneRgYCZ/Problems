#include <iostream>
using namespace std;

int main()
{
    int laser[1001][1001];
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> laser[i][j];
        }
    }
    int ok = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (laser[i][j] != laser[i][n - j - 1])
            {
                ok = 0;
            }
        }
    }
    if (ok == 1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}