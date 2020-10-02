#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], *p;
    cin.get(s, 256);
    p = strtok(s, " ");
    while (p)
    {
        cout << p << " ";
        for (int i = strlen(p) - 1; i >= 0; --i)
        {
            cout << p[i];
        }
        cout << " ";
        p = strtok(NULL, " ");
    }
}