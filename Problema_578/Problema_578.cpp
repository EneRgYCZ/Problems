#include <iostream>
using namespace std;
unsigned long long c, n, a[100000];
int main()
{
    cin >> n;
    cin >> a[0];
    int L = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
        {
            L++;
        }
        else
        {
            c += (L * (L - 1)) / 2;
            L = 1;
        }
    }
    if (L > 1)
    {
        c += (L * (L - 1)) / 2;
    }
    if (L == n)
    {
        c = n * (n - 1) / 2;
    }
    cout << n + c;
}