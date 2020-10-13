#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], *p, nou[256], ch;
    cin.getline(s, 256);
    p = strtok(s, " ");
    int poz = 0;
    while (p)
    {
        if (strlen(p) > 3)
        {
            ch = p[0];
            for (int i = 0; i < strlen(p) - 1; i++)
            {
                p[i] = p[i + 1];
            }
            p[strlen(p) - 1] = ch;
        }
        strcat(nou, p);
        strcat(nou, " ");
        p = strtok(NULL, " ");
    }

    cout << nou;
}