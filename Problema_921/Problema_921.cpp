#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    char s[256], v[256] = "AEIOUaeiou";
    cin.getline(s, 256);
    for (int i = 0; i <= strlen(s) - 1; i++)
    {
        if (strchr(v, s[i]))
        {
            cout << s[i] << "p" << s[i];
        }
        else
        {
            cout << s[i];
        }
    }
}