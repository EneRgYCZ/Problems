#include <iostream>
using namespace std;

int main()
{
    int n, p, a[20][20], patrat = 0;
    cin >> n;
    cin >> p;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            a[i][j] = patrat * patrat;
            patrat += 2;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}