#include <iostream>
using namespace std;

void numar (int n, int a[], int &k)
{
    k = 0;
    int min = a[0], max = 0;
    for(int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a [i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    int copie = min;
    while (copie)
    {
        max = max * 10;
        copie = copie / 10;
    }
    k = max + min;
}

int main ()
{

}