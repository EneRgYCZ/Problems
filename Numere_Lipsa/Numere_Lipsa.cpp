#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("numere.in");

int n;

int main()
{
    fin >> n;
    int y = n + 1, x;
    while (fin >> x)
    {
        if (x == y)
        {
            continue;
        }
        else
        {
            n--;
            y = x;
        }
    }
    cout << n;
    return 0;
}