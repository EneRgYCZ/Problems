#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v, c; // vocala si consoana cautate

    int ic, iv, ct = 0; // numarul de vocale - il vom folosi pentru a cazul specia

    char s[11];

    // citim sirul
    cin.getline(s, 11);

    // numaram cate vocale contine
    for (int i = 0; s[i]; i++)
        if (strchr("aeiouAEIOU", s[i]))
            ct++;

    // daca nu contine vocale sau contine doar vocale (nu contine consoane)
    if (ct == 0 || ct == strlen(s))
        cout << "IMPOSIBIL";
    else
    {
        //  sirul contine si vocale, si consoane
        for (int i = 0; s[i]; i++) //caut prima vocala
            if (strchr("aeiouAEIOU", s[i]))
            {
                v = s[i];
                iv = i;
                break;
            }
        for (int i = 0; s[i]; i++) // caut ultima consoana
            if (!strrchr("aeiouAEIOU", s[i]))
            {
                c = s[i];
                ic = i;
            }
        // le interschimb
        s[iv] = c;
        s[ic] = v;
        //afisez sirul modificat
        cout << s;
        cout << " ";
    }
}