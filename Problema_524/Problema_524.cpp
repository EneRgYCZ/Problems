#include <iostream>
using namespace std;

int main()
{
    int n, v[1000], st, dr, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (v[j] == v[i] && max < (j - i))
            {
                st = i;
                dr = j;
                max = j - i;
            }
        }
    }
    cout << st << " " << dr;
}