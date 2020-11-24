#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin("sumainsecv.in");
    ofstream fout("sumesecv.out");
    int n, m, v[10001], i, j, a, b, s, gasit = 0;
    long long suma = 0;
    fin >> n;
    for (i = 1; i <= n; ++i)
    {
        fin >> v[i];
    }
    fin >> m;
    for (i = 1; i <= m; ++i)
    {
        fin >> a >> b;
        suma = 0;
        for (j = a; j <= b; ++j)
        {
            suma = suma + v[j];
        }
        fout << suma << " ";
    }
}