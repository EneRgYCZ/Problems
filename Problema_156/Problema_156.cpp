#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], nou[256];
    cin.get(s, 256);
    int poz = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            nou[poz++] = s[i];
        }
    }
    nou[poz] = '\0';
    cout << nou;
}