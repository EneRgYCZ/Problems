#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("bac.out");

int main()
{
    int a, b, n;
    cin >> a >> b;
    for (int i = 1000000; i <= 9999999; ++i)
    {
        n = i;
        if ((n % 10) * (n / 10 % 10) == b && (n / 1000000) * (n / 100000 % 10) == a && (n / 100 % 10 == n / 1000 % 10 && n / 1000 % 10 == n / 10000 % 10))
        {
            fout << n << endl;
        }
    }
}
