#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[256], *p, *q;
    char z[256];
    cin.getline(s, 256);
    strcpy(z, s);
    p = strtok(s, " ");
    q = strtok(z, " ");
    while (p)
    {
        if (n <= strlen(p))
        {
            cout << p << endl;
        }
        p = strtok(NULL, " ");
    }
    while (q)
    {
        if (strlen(q) <= n)
        {
            cout << q << endl;
        }
        q = strtok(NULL, " ");
    }
}
