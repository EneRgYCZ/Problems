#include <iostream>

using namespace std;
void numar(int n, int &m)
{
    int v[10] = {}, pos = 0;
    int nou = 0;
    while (n)
    {
        if (n % 10 % 2 == 1)
        {
            v[n % 10]++;
        }
        n = n / 10;
    }
    for (int i = 9; i >= 1; i = i - 2)
    {
        for (int j = 1; j <= v[i]; ++j)
        {
            nou = nou * 10 + i;
        }
    }
    if (nou == 0)
    {
        m = -1;
    } 
    else
    { 
        m = nou;
    }
}

int main(int argc, char *argv[])
{
    int n, m;
    cin >> n;
    numar(n, m);
    cout << m;
}