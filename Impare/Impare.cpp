#include <iostream>
using namespace std;

int impare(int n)
{
    int nou = 0, t = 1;
    while (n)
    {
        if ((n % 10) % 2 != 0)
        {
            nou = nou + ((n % 10) - 1) * t;
            t = t * 10;
        }
        else
        {
            nou = nou + (n % 10) * t;
            t = t * 10;
        }
        n = n / 10;
    }
    n = nou;
    return n;
}
int main()
{
    cout << impare(15690);
}