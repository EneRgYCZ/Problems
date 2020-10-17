#include <iostream>
using namespace std;

void P(int &n, int c)
{
    int nou = 0, t = 1; //fie c=2 si n=12325 si numarul nou format va fi 135
    while (n)
    {
        if (n % 10 != c)
        {
            nou = nou + (n % 10) * t; // nu este nou=nou*10+n%10;
            t = t * 10;
        }
        n = n / 10;
    }
    n = nou;
}

int main()
{
    int a;
    cin >> a;
}