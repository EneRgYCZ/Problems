#include <iostream>
using namespace std;

int main ()
{
    int numar=0;
    cin>>numar;
    for (int i=1;i<=numar;i++)
    {
        if (i%3 == 0 && i%5 == 0)
        {
            cout <<"FizzBuzz"<<endl;
        }
        else if (i%3 == 0)
        {
            cout<<"Fizz"<<endl;
        }
        else if (i%5 == 0)
        {
            cout<<"Buzz"<<endl;
        }
        else 
        {
            cout<<i<<endl;
        }
    }
}