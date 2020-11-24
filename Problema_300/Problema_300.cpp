#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");

int main(int argc, char *argv[]) 
{
	int n,v[10001],i,j,a,b,s,gasit=0;
	long long suma=0;
	fin >> n >> s;
	for(i=1;i<=n;++i)
    {
		fin>>v[i];
	}
	for(i=1;i<=n;++i)
    {
		suma=0;
		for(j=i;j<=n;++j)
        {
			if(suma<s)
            {
				suma=suma+v[j];
            }
			else if(suma==s)
            {
				fout<<i<<" "<<j-1;
				gasit=1;
				break;
			}
		}
		if(gasit) break;
	}
	if(gasit==0) fout<<"0 0";
}