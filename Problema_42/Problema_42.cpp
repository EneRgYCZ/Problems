#include <iostream>
using namespace std;

int sterge(int v[], int &n, int &i, int &j)
{
    int suma = 0;
    for (int x = i; x <= n; x++)
    {
        v[x] = v[x + j - i + 1];
    }
    n = n - (j - i + 1);
}

int main()
{
    int v[101] = {12, 7, 6, 3, 8, 5}, n = 6, i = 2, j = 4;
    sterge(v, n, i, j);
    for (int i = 1; i < n; i++)
    {
        cout << v[i];
    }
}