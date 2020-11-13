#include <iostream>
using namespace std;

void num (int n, int v[])
{
    int primu = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= primu)
        {
            v[i] = 0;
        }
    }
}

int main()
{
    int n = 5, v[101] = {4, 5, 0, 9, 10, 7, 15, 3, 8, 10};
    num(n, v);
    for (int i = 0; i < n * 2; i++)
    {
        cout << v[i];
    }
}