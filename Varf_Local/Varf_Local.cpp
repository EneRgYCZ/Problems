#include <iostream>
using namespace std;

int main ()
{
    int n[1001];
    int nr;
    cin >> nr;
    for (int i = 0; i <= nr; i++)
    {
        cin >> n[i];
    }
    for (int j = 0; j <= nr; j++)
    {
        if (n[j] > n[j+1] || n[j] > n[j-1] || n[j] == n[j+1] || n[j] == n[j-1])
        {
            cout<< n[j] << " ";
        }
    }
}