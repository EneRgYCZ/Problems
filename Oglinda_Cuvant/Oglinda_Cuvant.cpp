#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], *p, ch, t[256] = "", nou[256] = "";
    int ok = 0, poz;
    cin.get(s, 256);
    p = strtok(s, " ");
    while (p)
    {
        if (strlen(p) % 2 == 1)
        {
            poz = 0;
            for (int i = strlen(p) - 1; i >= 0; --i)
            {
                t[poz++] = p[i];
            }
            if (strcmp(p, t) != 0)
            {
                ok = 1;
            }
            strcat(nou, t);
            strcat(nou, " ");
            strcpy(t, "");
        }
        else
        {
            strcat(nou, p);
            strcat(nou, " ");
        }
        p = strtok(NULL, " ");
    }
    if (ok == 1)
        cout << nou;
    else
        cout << "nu exista";
}