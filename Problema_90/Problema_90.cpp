#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{
    char s[256], vocale[11] = "AEIOUaeiou", maxima[256];
    int index = 0, vocal = 0, max = 0;
    fin >> index;
    for (int i = 0; i <= index; i++)
    {
        for (int j = 0; j <= strlen(s); j++)
        {
            fin.getline(s, 256);
            if (strchr(s, s[j]))
            {
                vocal++;
            }
            if (vocal > max)
            {
                max = vocal;
                strcpy(maxima, s);
            }
        }
        vocal = 0;
    }
}