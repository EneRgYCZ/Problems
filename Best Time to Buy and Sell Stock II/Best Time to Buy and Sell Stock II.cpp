#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vec[20] = {7, 1, 5, 3, 6, 4}, lowest = 10, highest = 0, v_nou[20], flag = 0;
    for (int i = 0; i <= 5; i++)
    {
        if (lowest > vec[i])
        {
            lowest = vec[i];
            cout << "Lowest" << lowest << endl;
        }
        if (highest < vec[i])
        {
            highest = vec[i];
            cout << "Highest" << highest << endl;
        }
    }
    for (int j = 0; j <= 5; j++)
    {
        if (flag == 0)
        {
            if (vec [j] == lowest)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            v_nou[j] = vec[j];
        }
    } 
}