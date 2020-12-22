#include <iostream>
using namespace std;

void divPrimMax (int n, int &p)
{
    p = 0;
    for (int i = 2; i <= n; i++)
    {
        n = n / i;
        if (n % i != 0)
        {
            p = i;
        }
    }
    p = p - 1; 
}

int main ()
{   
    int n, p;
    cin >> n;
    divPrimMax(n, p);
    cout << p;
}