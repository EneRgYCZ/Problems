#include <iostream>
using namespace std;

int cautare(int n, double X[], double v)
{
    for (int i = 0; i < n; i++)
    {
        if (X[i] == v)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    double X[101] = {4, 5, 0, 9, 10, 7, 15, 3, 8, 10}, v;
    cautare(n, X, v);
    for (int i = 0; i < n * 2; i++)
    {
        cout << X[i];
    }
}