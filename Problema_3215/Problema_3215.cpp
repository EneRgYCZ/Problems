#include <iostream>
using namespace std;

int Kth(int v[], int n, int nr, int k)
{
    int numara = 1, pozitie;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == nr)
        {
            if (numara > k)
            {
                return -1;
            }
            if (numara == k)
            {
                return i;
            }
            numara++;
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int a[101] = {4, 2, 5, 2, 6, 2};
    int nr = 2;
    int k = 2;
    Kth(a, 6, 2, 2);
}