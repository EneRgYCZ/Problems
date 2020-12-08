#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    ifstream fin("cheltuieli.in");
    int a, b, c, maxx = 0, nr_tipuri = 0, v[101] = {};
    while (fin >> a >> b >> c)
    {
        v[a] = v[a] + b * c;
        if (maxx <= v[a])
        {
            maxx = v[a];
        }
    }
    for (int i = 1; i <= 100; ++i)
    {
        if (maxx == v[i])
        {
            nr_tipuri++;
        }
    }
    cout << maxx << " " << nr_tipuri;
}