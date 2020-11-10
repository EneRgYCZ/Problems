#include <iostream>
using namespace std;

int sub(int n, int v[], int x)
{
    int k[101], pozitie = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            k[pozitie++] = v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
        {
            k[pozitie++] = v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = k[i];
    }
}

int main()
{
    
}