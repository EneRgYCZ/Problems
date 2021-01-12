#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101], *p, a[51][101], aux[101];
    int i, k = 0, lungime, ok;
    cin.getline(s, 101);
    ok = 0;
    p = strtok(s, " ");
    while (p)
    {
        lungime = strlen(p);
        strcpy(a[k], p);
        if (lungime % 2 == 1)
        {
            if (lungime > 1)
            {
                ok = 1;
                strcpy(aux, p + lungime / 2 + 1);
                strcpy(a[k] + lungime / 2, aux);
            }
        }
        k++;
        p = strtok(NULL, " ");
    }
    if (ok)
    {
        for (i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << "Nu exista";
    }
}