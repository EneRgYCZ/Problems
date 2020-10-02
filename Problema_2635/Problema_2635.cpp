#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("capslock.in");
    ofstream fout("capslock.out");
    int upper = 0;
    char s[256];
    fin.getline(s, 256);

    /*  for(int i=0;i<=strlen(s);i++)
    {
        if (s[i] == '#')
        {
            upper ++;
        }
        if (upper == 2) 
        {
            upper = 0;
        }
        if (upper == 1)
        {
            s[i] = toupper(s[i]);
        }
        else if (upper == 0)
        {
            s[i] = tolower(s[i]);
        }
    } */
    fout << s;
}
