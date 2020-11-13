#include <iostream>
using namespace std;

void P(int v[], int n, int &s)
{
    s = 0;
    int prim;
    for (int i = 0; i < n; i++)
    {
        prim = 1;
        for (int div = 2; div <= v[i] / 2; div++)
        {
            if (v[i] % div == 0)
            {
                prim = 0;
                break;
            }
        }
        if (prim)
        {
            s = s + v[i];
        } 
    }
}

int main()
{
    int n = 6; 
    int x[101] = {12, 7, 6, 3, 8, 5}, s;
    P(x, n, s);
    cout << s;
}