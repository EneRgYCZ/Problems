#include <iostream>
using namespace std;

int suma(int v[], int n, int i, int j)
{
    int suma = 0;
    for (int x = i; x <= n; x++)
    {
        v[x] = v[x + j - i + 1];
    }
    n = n - (j - i + 1);
    for (int x = 0; x <= n; x++)
    {
        suma = suma + v[x];
    }
    return suma;
}

int main()
{
    int v[101] = {12, 7, 6, 3, 8, 5}, n = 6, i = 2, j = 4;
    cout << suma(v, n, i, j);
}