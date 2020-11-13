#include <iostream>
using namespace std;

int Kht(int a[], int n, int x, int k)
{
    int numara = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == x)
        {
            numara++;
            if (numara == k)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int a[101] = {4, 2, 5, 2, 6, 2};
    int x = 2;
    int k = 2;
    cout << Kht(a, 6, 2, 2);
}