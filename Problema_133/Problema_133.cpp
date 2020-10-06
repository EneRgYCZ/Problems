#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char nume[256], prenume[256], nou[256] = "", vocs[] = "aeiouAEIOU";
    cin >> nume >> prenume;
    int pozitie = 0;
    for (int i = 0; i < strlen(prenume); ++i)
    {
        if (!strchr(vocs, prenume[i]))
        {
            nou[pozitie] = prenume[i];
            pozitie++;
        }
    }
    nou[pozitie] = '\0';
    strcat(nou, " ");
    strcat(nou, nume);
    cout << nou;
}