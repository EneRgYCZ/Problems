#include <iostream>
using namespace std;

int FizzBuzz (int numar)
{
    int Fizz = 0, Buzz = 0;
    cout<<"Enter Fizz"<<endl;
    cin>>Fizz;
    cout<<"Enter Buzz"<<endl;
    cin>>Buzz;
    cout<<endl;
    for (int i = 1; i <= numar; i++)
    {
        if (i % Fizz == 0 && i % Buzz == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % Fizz == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % Buzz == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}

int main()
{
    int numar;
    cin >> numar;
    cout<<FizzBuzz(numar);
}