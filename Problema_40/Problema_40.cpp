#include <iostream>
using namespace std;

void P(int x[101], int n, int &mini, int &maxi, int &sum)
{
    mini = x[0];
    maxi = 0;
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + x[i];
        if (mini >= x[i])
        {
            mini = x[i];
        }
        if (maxi <= x[i])
        {
            maxi = x[i];
        }
    }
}

int main()
{
    int x[101] = {12, 7, 6, 3, 8, 5};
    int n, mini, maxi, sum;
    P(x, n, mini, maxi, sum);
    cout << mini << " " << maxi << " " << sum;
}