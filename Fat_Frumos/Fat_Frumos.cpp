#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n = 0;
    char s[256], *p;
    cin.getline(s, 256);
    p = strtok(s, " ");
    cin >> n;
    while (p)
    {
        if (strlen(p) == n)
        {
            cout << p << endl; 
        }
        p = strtok(NULL, " ");
    }
}