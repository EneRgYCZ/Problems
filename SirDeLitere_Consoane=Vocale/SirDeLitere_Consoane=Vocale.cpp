#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int voc = 0, cons = 0, output = 0;
    char s[256], vocale[6] = "aeiou", *q;
    cin.getline(s, 256);
    q = strtok(s, " ");
    while (q)
    {
        if (strlen(q) % 2 == 0)
        {
            for(int i = 0; i < strlen(q);++i)
            {
			    if(strchr(vocale, q[i]))
                {
				    voc++;
                }
                else 
                {
                    cons++;
                }
			}
            if (cons == voc)
            {
                output++;
            }
        }
        voc = 0;
        cons = 0;
        q = strtok(NULL, " ");
    }
    cout << output;
}