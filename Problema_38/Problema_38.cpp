#include <iostream>
using namespace std;

void shift(int x[101], int n)
{
    int valoare = x[0];
    for (int i = 0; i < n; i++)
    {
        x[i] = x[i + 1];
    }
    x[n -1] = valoare;
}

int main()
{
    int x[101] = {12, 7, 6, 3, 8, 5}, n;
    shift(x, n);
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
    }
}