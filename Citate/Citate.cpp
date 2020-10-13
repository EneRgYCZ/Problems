#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int counter = 0, x = 0;
    char s[256], v[256] = "";
    char *p;
    cin.getline(s, 256);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '>')
        {
            x = 0;
        }
        if (x == 1)
        {
            if (s[i] != ' ')
            {
                s[i] = s[i] - 32;
            }
        }
        if (s[i] == '<')
        {
            x = 1;
        }
    }
    cout << s;
}