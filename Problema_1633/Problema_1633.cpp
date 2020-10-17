#include <iostream>
using namespace std;

void dublare1 (int &n)
{
    int nou = 10, copie = n;
    while (n > 9)
    {
        n = n / 10;
        nou = nou * 10;
    }
    nou = nou * n + copie;
    n = nou;
}


int main()
{
    int a;
    cin >> a;
    cout << dublare1(a);
}