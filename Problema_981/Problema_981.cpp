#include <iostream>
using namespace std;

int main()
{
    long long int n, nr, nr_max = 0, numara = 0, ok;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> nr;
        ok = 1;
        while (nr)
        {
            if (nr % 2 == 0)
            {
                ok = 0;
                break;
            }
            nr = nr / 2;
        }
        if (ok)
        {
            numara++;
        }
        else
        {
            if (nr_max <= numara)
            {
                nr_max = numara;
            }
            numara = 0;
        }
    }
    cout << nr_max;
}