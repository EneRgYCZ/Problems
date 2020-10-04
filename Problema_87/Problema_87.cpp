#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{
    char s[256], lungalau[256] = "";
    int n, i, numaraLitere = 0, maxx = 0;
    fin >> n;
    fin.get();
    for (i = 1; i <= n; ++i)
    {
        fin.getline(s, 256);
        numaraLitere = 0;
        for (int j = 0; j < strlen(s); ++j)
        {
            numaraLitere++;
        }
        if (maxx < numaraLitere)
        {
            maxx = numaraLitere;
            strcpy(lungalau, s);
        }
    }
    fout << lungalau;
}