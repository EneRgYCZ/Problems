#include <iostream>
using namespace std;

int sub(int n, int v[], int k)
{
    int suma = 0, numara = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 1 && numara < k)
        {
            suma = suma + v[i];
            numara++;
        }
    }
    if (numara != k)
    {
        return -1;
    }
    else
    {
        return suma;
    }
}

int main()
{
}