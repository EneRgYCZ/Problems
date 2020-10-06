#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], vocs[] = "aeiouAEIOU";
    cin.get(s, 256);
    for (int i = 0; i < strlen(s); ++i)
    {
        if (!strchr(vocs, s[i]))
        {
            cout << s[i];
        }
    }
}