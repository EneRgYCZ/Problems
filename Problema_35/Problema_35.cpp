#include <iostream>
using namespace std;

int count(double a[101], int n)
{
    int suma = 0, z = 0;
    for (int i = 0; i <= n; i++)
    {
        suma = suma + a[i];
    }
    suma = (double) suma / n; // POLIMORPHISM BEHAVIOUR 
    for (int k = 0; k <= n; k++)
    {
        if (suma >= a[k])
        {
            z++;
        }
    }
    return z;
}

int main()
{
    double v[101];
    int n;
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << count(v, n);
}