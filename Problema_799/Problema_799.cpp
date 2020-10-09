#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], copie[256] = "";
    cin.get(s, 256);
    strcpy(copie, s);
    char *p = strtok(s, " ");
    int exista = 0;
    while (p)
    {
        if (strlen(p) % 2 == 1 && strlen(p) >= 3)
        {
            exista = 1;
        }
        p = strtok(NULL, " ");
    }
    if (exista == 1)
    {
        char *q;
        q = strtok(copie, " ");
        while (q)
        {
            if (strlen(q) % 2 == 1 && strlen(q) >= 3)
            {
                for (int i = 0; i < strlen(q); ++i)
                {
                    if (i != strlen(q) / 2)
                        cout << q[i];
                }
                cout << " ";
            }
            else
            {
                cout << q << " ";
            }

            q = strtok(NULL, " ");
        }
    }
    else
    {
        cout << "nu exista";
    }
}