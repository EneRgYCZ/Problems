#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{
    int index = 0, ok = 0;
    char s[256];
    fin>>index;
    for (int i = index; i > 0; i--)
    {
        fin.getline(s, 256);
        int inceput = 0, sfarsit = strlen(s) - 1;
        for (int j = 0; j <= strlen(s) / 2; j++)
        {
            if (s[inceput] == s[sfarsit])
            {
                ok = 1;
                inceput++;
                sfarsit--;
            }
            else
            {
                ok = 0;
                break;
            }
        }
        if (ok == 1)
        {
            fout << 1 << endl;
        }
        else
        {
            fout << 0 << endl;
        }
        ok = 0;
    }
}
