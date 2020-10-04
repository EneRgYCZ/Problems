#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[255], t[255];
    cin.get(s, 255);
    cin.get();
    cin.get(t, 255);
    for (int i = 0; i < strlen(s); ++i)
    {
        if (strchr(t, s[i]))
        {
            cout << s[i];
        }
    }
}