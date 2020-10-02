#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[255], *p, voc[255] = "AEIOUaeiou";
    int nr;
    cin.get(s, 255);
    p = strtok(s, " ");
    while (p)
    {
        int fin = strlen(p);
        if (strchr(voc, p[0]) && strchr(voc, p[fin - 1]))
        {
            nr++;
        }
        p = strtok(NULL, " ");
    }
    cout<<nr;
}