#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("vocmax.in");
    ofstream fout("vocmax.out");
    char s[256], *p, lungalau[256] = "", copie[256] = "";
    int n, i, numaraCuvinte, maxx = 0;
    fin >> n;
    fin.get();
    for (i = 1; i <= n; ++i)
    {
        fin.getline(s, 256);
        numaraCuvinte = 0;
        strcpy(copie, s);
        p = strtok(s, " ");
        while (p)
        {
            numaraCuvinte++;
            p = strtok(NULL, " ");
        }
        if (maxx < numaraCuvinte)
        {
            maxx = numaraCuvinte;
            strcpy(lungalau, copie);
        }
    }
    fout << lungalau;
}