#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], nou[256], vocs[] = "aeiouAEIOU";
    cin.get(s, 256);
    int poz = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if (strchr(vocs, s[i]))
        {
            nou[poz++] = s[i];
            i = i + 2;
        }
        else
        {
            nou[poz++] = s[i];
        }
    }
    nou[poz] = '\0';
    cout << nou;
}