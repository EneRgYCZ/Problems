#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char *argv[]) 
{
	char s[256],t[256]="",vocs[]="aeiou";
	int j=0,exista=0;;
	cin.getline(s,256);
	for(int i=0;i<strlen(s);++i)
    {
		if(strchr(vocs,s[i]))
        {
			exista=1;
			t[j++]=s[i];
			t[j++]='*';
		}
        else
        {
			t[j++]=s[i];
		}
	}
	t[j]='\0';
	if(exista)
    {
		cout<<t;
    }
	else 
    {
		cout<<"FARA VOCALE";
	}
}