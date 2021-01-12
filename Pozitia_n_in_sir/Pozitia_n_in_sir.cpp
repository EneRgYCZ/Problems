#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");

int main()
{
    int n, x, i, ok = 1;
    int a[10] = {0};
    fin >> n;
    while (fin >> x)
    {
        a[(int)log10(x)]++;
    }
    x = 0;
    i = 0;
    while (x != n)
    {
        if (a[i] > 0)
        {
            x++;
        }
        i++;
        if (i == 10)
        {
            cout << "Nu exista";
            ok = 0;
            break;
        }
    }
    
    if (ok)
    {
        cout << pow(10, i - 1 ) << endl;
    }
}