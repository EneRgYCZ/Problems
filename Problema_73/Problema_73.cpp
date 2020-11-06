#include <iostream>
#include <algorithm>
using namespace std;

int suma(int v[], int n, int m)
{
    int s = 0, i, copie;
    bool sortat = true;
    do
    {
        sortat = true;
        for (i = 0; i < n - 1; ++i)
        {
            if (v[i] > v[i + 1])
            {
                copie = v[i];
                v[i] = v[i + 1];
                v[i + 1] = copie;
                sortat = false;
            }
        }

    } while (sortat != true);
    for (i = 0; i < m; ++i)
    {
        s = s + v[i];
    }
    return s;
}

int suma2(int v[], int &n, int &m)
{
    int sm = 0;
    sort(v, v + n);
    for (int x = 0; x < m; x++)
    {
        sm = sm + v[x];
    }
    return sm;
}

int main()
{
    int v[101] = {12, 7, 6, 3, 8, 5}, n = 6, m = 4;
    cout << suma(v, n, m);
}