#include <iostream>
using namespace std;

int Egal(int n)
{
    int x = 0;
    bool laser = true, raze = false;
    while (n > 9)
    {
        if ((n % 10) % 2 == 1)
        {
            if (raze)
            {
                if (n % 10 != x)
                {
                    return 0;
                    break;
                }
            }
            x = n % 10;
            raze = true;
        }
        n = n / 10;
    }
    if (laser)
    {
        return 1;
    }
}

int main()
{
    cout << Egal(7240);
}